/*
 * Problem #9: Palindrome Number
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: java
 * Date: 04/02/2024, 00:42:02
 * Link: https://leetcode.com/problems/palindrome-number/
 */

class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int original = x;
        int rev = 0;
        while(x>0){
            rev = x%10 + rev*10;
            x=x/10;
        } 
     return rev==original;
 
            
        }
        
    }
