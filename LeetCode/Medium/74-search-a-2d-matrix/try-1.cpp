/*
 * Problem #74: Search a 2D Matrix
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/07/2025, 22:31:21
 * Link: https://leetcode.com/problems/search-a-2d-matrix/
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
    if (mat.empty() || mat[0].empty()) return false;
    int n = mat.size();
    int m = mat[0].size();
    int low = 0, high = n * m - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;
        if (mat[row][col] == target) return true;
        else if (mat[row][col] < target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
 }
};
