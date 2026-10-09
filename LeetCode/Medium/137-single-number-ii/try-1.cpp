/*
 * Problem #137: Single Number II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 1/27/2026, 3:50:50 PM
 * Link: https://leetcode.com/problems/single-number-ii/
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 1; i < n; i+=3) {
            if(nums[i] != nums[i-1])
                return nums[i-1];
        }

        return nums[n-1];
    }
};
