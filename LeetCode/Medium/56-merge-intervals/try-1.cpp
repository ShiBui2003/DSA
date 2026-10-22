/*
 * Problem #56: Merge Intervals
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2025, 22:57:26
 * Link: https://leetcode.com/problems/merge-intervals/
 */

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for(int i = 0;i<n;i++){
            if(ans.empty() || intervals[i][0]> ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
}; 
