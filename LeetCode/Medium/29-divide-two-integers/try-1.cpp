/*
 * Problem #29: Divide Two Integers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/01/2026, 00:38:14
 * Link: https://leetcode.com/problems/divide-two-integers/
 */

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (divisor == 1) return dividend;

        bool isPos = true;

        if(dividend >= 0 && divisor < 0)
        isPos = false;
        else if(dividend < 0 && divisor > 0)
        isPos = false;

        long long n = dividend;
        long long d = divisor;

        n = abs(n);
        d = abs(d);

        long long ans = 0, sum =0;
        while(sum + d <= n){
        ans++;
        sum+= d;
        }

        if(ans>INT_MAX && isPos)
        return INT_MAX;
        if(ans >INT_MAX && !isPos) 
        return INT_MIN;

        return isPos ? ans: -1*ans;     
    }
};
