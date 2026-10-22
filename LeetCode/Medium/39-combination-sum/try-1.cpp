/*
 * Problem #39: Combination Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/10/2024, 21:02:55
 * Link: https://leetcode.com/problems/combination-sum/
 */

class Solution {
public:
    void findCombination(int ind,  int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds) {
       if(ind==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
       } 
   if(arr[ind]<=target){
    ds.push_back(arr[ind]);
    findCombination(ind, target-arr[ind],arr,ans,ds);
    ds.pop_back();
   }
   findCombination(ind+1,target,arr,ans,ds);
    }
    public:
    vector<vector<int>> combinationSum(vector<int>& candidates,int target){
        vector<vector<int>>ans;
        vector<int> ds;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
    
};
