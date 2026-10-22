/*
 * Problem #47: Permutations II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/10/2024, 14:54:37
 * Link: https://leetcode.com/problems/permutations-ii/
 */

class Solution {
public:
     void backtrack(vector<vector<int>>& list, vector<int>& templist, vector<int>& nums,vector<bool>& used) {
        if (templist.size() == nums.size()) {
            list.push_back(templist);
        } else {
            for (int i = 0; i < nums.size(); i++) {
                if (used[i] || (i>0 && nums[i]==nums[i-1] && !used[i-1])) continue;
                used[i] = true;
                templist.push_back(nums[i]);
                backtrack(list, templist, nums,used);
                used[i] = false;
                templist.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
          vector<vector<int>> list;
        vector<bool> used(nums.size(),false);
        vector<int> templist;
        sort(nums.begin(),nums.end());
        backtrack(list, templist,nums,used);
        return list;  
        
    }
};


