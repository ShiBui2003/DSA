/*
 * Problem #643: Maximum Average Subarray I
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 03/03/2026, 02:30:01
 * Link: https://leetcode.com/problems/maximum-average-subarray-i/
 */

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        int sum = 0;
        
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        
        int maxSum = sum;
        
        for(int i = k; i < n; i++){
            sum = sum - nums[i - k] + nums[i];
            maxSum = max(maxSum, sum);
        }
        
        return (double)maxSum / k;
    }
};
