/*
 * Problem #14: Longest Common Prefix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/09/2025, 19:41:14
 * Link: https://leetcode.com/problems/longest-common-prefix/
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int n=arr.size();
        string ans = "";
        for(int i = 0;i<arr[0].length();i++){
            char ch = arr[0][i];

            bool match = true;

            for(int j = 1;j<n;j++){
                if(arr[j].size()<i || ch != arr[j][i]){
                    match = false;
                    break;
                }
            }
            if(match == false)
            break;
            else
            ans.push_back(ch);
        }
        return ans;
    }
};
