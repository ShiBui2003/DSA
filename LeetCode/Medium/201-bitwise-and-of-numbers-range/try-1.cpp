/*
 * Problem #201: Bitwise AND of Numbers Range
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 1/29/2026, 10:01:09 AM
 * Link: https://leetcode.com/problems/bitwise-and-of-numbers-range/
 */


class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int cnt = 0;
        while (left != right) {
            left >>= 1;
            right >>= 1;
            cnt++;
        }
        return (left << cnt);
    }
};


