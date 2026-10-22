/*
 * Problem #1508: Range Sum of Sorted Subarray Sums
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/08/2024, 01:00:31
 * Link: https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
 */

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sums;
        int MOD=1e9 + 7;

        for(int i= 0 ;i<nums.size();i++){
            int sum= 0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                sums.push_back(sum);
            }
        }
        sort(sums.begin(), sums.end());
        long long ans=0;
        for(int i = left -1 ;i<right;i++){
            ans=(ans+sums[i])% MOD;
        }
        return ans;
        
    }
};
