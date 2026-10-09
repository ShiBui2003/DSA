/*
 * Problem #991: Broken Calculator
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/26/2026, 2:19:44 PM
 * Link: https://leetcode.com/problems/broken-calculator/
 */

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        if(startValue >= target)
        return startValue - target;

        if(target % 2 == 0){
            return 1 + brokenCalc(startValue,target/2);
        }
        return 1 + brokenCalc(startValue,target + 1);
    }
};
