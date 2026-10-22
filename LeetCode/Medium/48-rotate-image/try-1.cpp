/*
 * Problem #48: Rotate Image
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/02/2025, 00:49:15
 * Link: https://leetcode.com/problems/rotate-image/
 */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> Matrix2
        (n, vector<int>(n)); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                Matrix2[j][n - 1 - i] = matrix[i][j];
            }
        }
        matrix = Matrix2;
    }
};
