/*
 * Problem #678: Valid Parenthesis String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/2/2026, 9:58:01 PM
 * Link: https://leetcode.com/problems/valid-parenthesis-string/
 */

class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0, maxOpen = 0;
        for(char c : s){
            if(c == '('){
                minOpen++;
                maxOpen++;
            }
            else if(c == ')') {
                minOpen--;
                maxOpen--;
            }else {
                minOpen--;
                maxOpen++;
            }
            if(maxOpen < 0) return false;
            minOpen = max(minOpen , 0);
        }
        return minOpen == 0;
    }
};
