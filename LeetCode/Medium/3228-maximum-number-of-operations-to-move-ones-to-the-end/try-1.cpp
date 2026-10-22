/*
 * Problem #3228: Maximum Number of Operations to Move Ones to the End
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/11/2025, 23:46:42
 * Link: https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end/
 */

class Solution {
public:
    int maxOperations(string s) {
        int n =s.length();
        int result = 0;
        int i= 0;
        int count = 0;

        while(i<n){
            if(s[i] == '0'){
                result += count;
                while(i<n && s[i] == '0')
                i++;
            }else{
                count++;
                i++;
            }
        }
        return result;
    }
};
