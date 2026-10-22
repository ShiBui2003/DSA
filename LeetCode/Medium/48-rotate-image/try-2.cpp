/*
 * Problem #48: Rotate Image
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 18/04/2026, 00:34:47
 * Link: https://leetcode.com/problems/rotate-image/
 */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = m;

        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        for(int i = 0;i<m ;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
