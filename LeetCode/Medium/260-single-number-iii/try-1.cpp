/*
 * Problem #260: Single Number III
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/3/2026, 3:24:55 PM
 * Link: https://leetcode.com/problems/single-number-iii/
 */

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto p : mp){
            if(p.second == 1){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};
