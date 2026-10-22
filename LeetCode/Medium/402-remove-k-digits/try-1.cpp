/*
 * Problem #402: Remove K Digits
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/01/2026, 15:09:40
 * Link: https://leetcode.com/problems/remove-k-digits/
 */

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack <char> st;
        for(int i = 0;i<num.size();i++){
            char digit = num[i];
            while(!st.empty() && k>0 && st.top()>digit){
                st.pop();
                k--;
            }
            st.push(digit);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        while(ans.size()>0 && ans.back() =='0'){
        ans.pop_back();
        }
        reverse(ans.begin(),ans.end());

        if(ans.empty()) return "0";

        return ans;
    }
};
