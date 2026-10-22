/*
 * Problem #8: String to Integer (atoi)
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/10/2025, 23:24:02
 * Link: https://leetcode.com/problems/string-to-integer-atoi/
 */

class Solution {
public:
    int myAtoi(string s) {
        if(s.length() == 0) return 0;

        int i = 0;
        while(i<s.size() && s[i] == ' '){
            i++;
        }
        s = s.substr(i);

        int sign = +1;
        long ans = 0;

        if(s[0] == '-') sign = -1;
        int MAX = INT_MAX, MIN = INT_MIN;
        i = (s[0] == '+' || s[0] == '-') ? 1:0;
            while(i < s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';
            ans = ans * 10 + digit;

            if(sign == 1 && ans > INT_MAX) return INT_MAX;
            if(sign == -1 && -ans < INT_MIN) return INT_MIN;

            i++;
            }
        return (int)(sign*ans);
    }
};
