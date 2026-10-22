/*
 * Problem #1614: Maximum Nesting Depth of the Parentheses
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 30/09/2025, 01:01:27
 * Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
 */

class Solution {
public:
    int maxDepth(string s) {
        int opencount = 0;
        int maxD = 0;
        for(char c : s){
            if(c == '(') {
                opencount++;
                maxD = max(maxD,opencount);
            }
            else if(c == ')'){
                opencount--;
            }
        }
        return maxD;
    }
};
