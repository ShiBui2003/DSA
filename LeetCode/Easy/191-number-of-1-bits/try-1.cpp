/*
 * Problem #191: Number of 1 Bits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/07/2024, 20:53:54
 * Link: https://leetcode.com/problems/number-of-1-bits/
 */

class Solution {
public:
    int hammingWeight(int n) {
        int numbers = 0;
 while(n!=0){
 if(n&1){
numbers++;
 }
             n=n>>1;}
        return numbers; }};
