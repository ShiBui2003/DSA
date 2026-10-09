/*
 * Problem #334: Increasing Triplet Subsequence
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/21/2026, 7:13:59 PM
 * Link: https://leetcode.com/problems/increasing-triplet-subsequence/
 */

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       int n = nums.size();
       int num_1 = INT_MAX;
       int num_2 = INT_MAX;
       for(int i =0;i < n;i++){
        int num_3 = nums[i];
        if(num_3 <= num_1){
            num_1 = num_3;
        }
        else if( num_3 <= num_2){
            num_2 = num_3;
        }
        else{
            return true;
        }
       }
       return false;
    }
};
