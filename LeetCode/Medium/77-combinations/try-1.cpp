/*
 * Problem #77: Combinations
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/10/2024, 15:45:58
 * Link: https://leetcode.com/problems/combinations/
 */

class Solution {
public:
void backtrack(vector<vector<int>>& list, int start, vector<int>& templist,int n,int k){
    if(templist.size()==k){
        list.push_back(templist);

    }
    else{
        for(int i=start;i<=n;i++){
            templist.push_back(i);
            backtrack(list,i+1,templist,n,k);
            templist.pop_back();
        }
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> list;
        vector<int> templist;
        backtrack(list, 1,templist,n,k);
        return list;

        
    }
};
