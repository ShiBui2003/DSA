/*
 * Problem #283: Move Zeroes
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 13/09/2024, 01:41:16
 * Link: https://leetcode.com/problems/move-zeroes/
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = 0;

        while (right < nums.size()) {
            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
    }
};
