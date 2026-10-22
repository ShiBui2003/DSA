/*
 * Problem #53: Maximum Subarray
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 16/02/2025, 15:38:47
 * Link: https://leetcode.com/problems/maximum-subarray/
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum =0;
        long long maxi = LONG_MIN;
        for(int i= 0;i<nums.size();i++){
        sum += nums[i];
        if(sum > maxi){
            maxi = sum;
        }
         if(sum < 0){
            sum = 0;
         }
        
    }
    return maxi;
}
};
