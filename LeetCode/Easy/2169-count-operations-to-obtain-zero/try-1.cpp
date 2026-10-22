/*
 * Problem #2169: Count Operations to Obtain Zero
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/11/2025, 15:34:31
 * Link: https://leetcode.com/problems/count-operations-to-obtain-zero/
 */

class Solution {
public:
    int countOperations(int num1, int num2) {
       int count = 0;
       while(num1 > 0 && num2 >0){
        count += num1/num2;
        num1 %= num2;

        swap(num1, num2);
       }
       return count;
    }
};
