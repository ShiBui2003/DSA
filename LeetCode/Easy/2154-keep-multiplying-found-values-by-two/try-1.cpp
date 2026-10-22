/*
 * Problem #2154: Keep Multiplying Found Values by Two
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/11/2025, 23:12:04
 * Link: https://leetcode.com/problems/keep-multiplying-found-values-by-two/
 */

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int> mp;

        for(int i:nums){
            mp[i]++;
        }
        while(mp[original]>0){
            original *= 2;
        }
        return original;
    }
};
