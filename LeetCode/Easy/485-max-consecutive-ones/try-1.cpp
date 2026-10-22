/*
 * Problem #485: Max Consecutive Ones
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/07/2024, 23:49:46
 * Link: https://leetcode.com/problems/max-consecutive-ones/
 */



class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0; 

        for (int i = 0; i < nums.size(); i++) { 
            if (nums[i] == 1) { 
                count += 1;
            } else {
                maxCount = max(maxCount, count); 
                count = 0;
            }
        }

        return max(maxCount, count); 
    }
};

