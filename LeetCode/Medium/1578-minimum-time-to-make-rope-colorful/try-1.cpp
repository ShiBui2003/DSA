/*
 * Problem #1578: Minimum Time to Make Rope Colorful
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/11/2025, 13:14:09
 * Link: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
 */

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int prev = 0;
        int time = 0;

        for(int i = 1;i<colors.size();i++){
            if(colors[i] == colors[prev]){
                if(neededTime[prev] < neededTime[i]){
                    time += neededTime[prev];
                    prev = i;
                }
                else{
                    time += neededTime[i];
                }
            }
               else{
                    prev = i;
                }
        }
        return time;
    }
};
