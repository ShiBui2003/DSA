/*
 * Problem #20: Valid Parentheses
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/10/2025, 21:02:10
 * Link: https://leetcode.com/problems/valid-parentheses/
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(')
                st.push(')');
            else if (c == '{')
                st.push('}');
            else if (c == '[')
                st.push(']');
            else {
                if (st.empty() || st.top() != c)
                    return false;
                st.pop();
            }
        }

        return st.empty();
    }
};

