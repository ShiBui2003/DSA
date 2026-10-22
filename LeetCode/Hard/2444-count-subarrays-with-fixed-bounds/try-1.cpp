/*
 * Problem #2444: Count Subarrays With Fixed Bounds
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/02/2026, 22:47:35
 * Link: https://leetcode.com/problems/count-subarrays-with-fixed-bounds/
 */

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 
        0;
        int minPos = -1;
        int maxPos = -1;
        int wall = -1;
        for(int i = 0; i < nums.size();i++){
            if (nums[i] < minK || nums[i] > maxK)
            wall = i;
            if(nums[i] == minK)
            minPos = i;
            if(nums[i] == maxK)
            maxPos = i;

            long long smaller =min(minPos,maxPos);
            long long temp = smaller - wall;
            ans += (temp <= 0) ? 0 : temp;
        }
        return ans;
    }
};
