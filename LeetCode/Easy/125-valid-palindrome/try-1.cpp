/*
 * Problem #125: Valid Palindrome
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/09/2025, 17:27:39
 * Link: https://leetcode.com/problems/valid-palindrome/
 */

class Solution {
public:
    bool isPalindrome(string s) {
        int start =0;
        int end = s.size() - 1;

        while(start <= end){
            while(start < end && !isalnum(s[start])){
                start++;
            }
            while(start < end && !isalnum(s[end])){
                end--;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
