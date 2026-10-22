/*
 * Problem #2418: Sort the People
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 22/07/2024, 23:41:49
 * Link: https://leetcode.com/problems/sort-the-people/
 */

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
     for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
    if (heights[j] < heights[j + 1]) 
{
    std::swap(heights[j], heights[j + 1]);
                std::swap(names[j], names[j + 1]);
     }
            } }
        return names;
    } };
    
