/*
 * Problem #766: Toeplitz Matrix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/04/2026, 21:50:26
 * Link: https://leetcode.com/problems/toeplitz-matrix/
 */

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 1;i<m;i++){
            for(int j = 1;j<n;j++){
                if(matrix[i][j] != matrix[i - 1][j - 1])
                return false;
            }
        }
        return true;
    }
};
