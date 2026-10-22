/*
 * Problem #1903: Largest Odd Number in String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/09/2025, 00:06:23
 * Link: https://leetcode.com/problems/largest-odd-number-in-string/
 */

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        for(int i = n-1;i>=0;i--){
            if((num[i] - '0')% 2 !=0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }

};
