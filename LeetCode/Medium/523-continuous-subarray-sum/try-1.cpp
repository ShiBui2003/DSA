/*
 * Problem #523: Continuous Subarray Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/22/2026, 7:12:50 PM
 * Link: https://leetcode.com/problems/continuous-subarray-sum/
 */

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int>mp;
        int sum = 0;
        mp[0] = -1;
        for(int i = 0;i<n;i++){
            sum += nums[i];
            int remainder = sum % k;

            if(mp.find(remainder) != mp.end()){
                if(i - mp[remainder] >= 2)
                return true;
            } 
            else{
                mp[remainder] = i;
            }
        }
        return false;
    }
};
