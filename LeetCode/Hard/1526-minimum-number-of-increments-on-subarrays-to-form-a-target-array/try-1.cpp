/*
 * Problem #1526: Minimum Number of Increments on Subarrays to Form a Target Array
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/10/2025, 23:57:12
 * Link: https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/
 */

class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n = target.size();
        int sum = target[0];
        for(int i=0;i<n-1;i++){
            if(target[i+1]>target[i]){
                sum+=target[i+1]-target[i];
            }
        } 
        return sum;

    }
};
