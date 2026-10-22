/*
 * Problem #2279: Maximum Bags With Full Capacity of Rocks
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/03/2026, 23:36:34
 * Link: https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks/
 */

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int>required(n,0);
        for(int i = 0;i<n;i++){
            int curr_rock = rocks[i];
            int cap_rock = capacity[i];
            int require_rock = cap_rock - curr_rock;
            required[i] = require_rock;
        }   
        sort(begin(required),end(required));
        int count = 0;
        for(int i = 0;i<n;i++){
            if(required[i] == 0)
            count++;
            else {
                if (additionalRocks >= required[i]){
                    additionalRocks -= required[i];
                    count++;
                }else{
                    break;
                }
            }
    
        }
        return count;
  } 
};
