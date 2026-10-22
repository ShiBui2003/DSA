/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 08/09/2024, 01:55:06
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

