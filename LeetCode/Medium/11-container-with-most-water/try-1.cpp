/*
 * Problem #11: Container With Most Water
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/18/2026, 9:22:01 PM
 * Link: https://leetcode.com/problems/container-with-most-water/
 */

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j= n-1;
        int maxWater = 0;
        while(i < j){
            int w = j - i;
            int h = min(height[i],height[j]);
            int area = w*h;
            maxWater = max(maxWater,area);
            if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxWater;
    }
};
