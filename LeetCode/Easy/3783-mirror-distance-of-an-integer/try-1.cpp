/*
 * Problem #3783: Mirror Distance of an Integer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/04/2026, 13:31:03
 * Link: https://leetcode.com/problems/mirror-distance-of-an-integer/
 */

class Solution {
public:
    int mirrorDistance(int n) {
        long original  = n;
        long reversedNum = 0;
        while(n != 0) {
        int remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
        }   
        return abs(original - reversedNum);
    }
};
