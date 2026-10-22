/*
 * Problem #9: Palindrome Number
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 30/05/2024, 00:17:04
 * Link: https://leetcode.com/problems/palindrome-number/
 */

class Solution {
public:
    bool isPalindrome(int x) {
        
        long long  revNum = 0;
         long long  dup = x;
         while( x > 0 )
{
    long long  ld = x % 10;
     revNum  = (revNum * 10) + ld;
     x = x / 10;
}       
if(dup == revNum) return true;
else  return false; 
    }
};
