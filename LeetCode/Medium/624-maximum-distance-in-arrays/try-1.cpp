/*
 * Problem #624: Maximum Distance in Arrays
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/30/2026, 9:40:59 PM
 * Link: https://leetcode.com/problems/maximum-distance-in-arrays/
 */

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int MIN = arrays[0].front();
        int MAX = arrays[0].back();
        int result = 0;

        for(int i = 1;i<arrays.size();i++){
              int currMin = arrays[i].front();
              int currMax = arrays[i].back();
              result = max({result,abs(currMin - MAX) , abs(currMax - MIN)});
              MAX = max(MAX , currMax);
              MIN = min(MIN , currMin);
        }
        return result;
                }

};
