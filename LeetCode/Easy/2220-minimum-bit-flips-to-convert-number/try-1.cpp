/*
 * Problem #2220: Minimum Bit Flips to Convert Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/01/2026, 18:47:30
 * Link: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
 */

class Solution {
public:
    int minBitFlips(int start, int goal) {
     int num = start ^ goal;
     int count = 0;
     for(int i=0;i<32;i++) {
        count += (num & 1);
        num = num >> 1;
     }  
     return count;
    }
};
