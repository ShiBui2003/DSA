/*
 * Problem #3100: Water Bottles II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/10/2025, 00:48:42
 * Link: https://leetcode.com/problems/water-bottles-ii/
 */

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int totalDrunk = numBottles;
        int empty = numBottles;
        while (empty >= numExchange) {
            empty -= numExchange;
            totalDrunk++;
            empty++;
            numExchange++;
        }
        return totalDrunk;
    }
};
