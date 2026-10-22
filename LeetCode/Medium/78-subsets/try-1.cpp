/*
 * Problem #78: Subsets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/10/2024, 01:37:06
 * Link: https://leetcode.com/problems/subsets/
 */

class Solution {
public:
    void backtrack(vector<vector<int>>& list,vector<int>& templist,vector<int>&nums, int start ){
        list.push_back(templist);
        for(int i=start;i<nums.size();i++){
            templist.push_back(nums[i]);
            backtrack(list,templist,nums,i+1);
            templist.pop_back();
        }
    }
  vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>>list;
        vector<int> templist;
        backtrack(list,templist,nums,0);
        return list;
    }
};
