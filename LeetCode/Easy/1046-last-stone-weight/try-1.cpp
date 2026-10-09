/*
 * Problem #1046: Last Stone Weight
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/15/2026, 7:16:19 PM
 * Link: https://leetcode.com/problems/last-stone-weight/
 */

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1){
            sort (begin(stones) , end(stones));
            int a = stones.back(); stones.pop_back();
            int b = stones.back(); stones.pop_back();

            stones.push_back(abs(a-b));
        }
        return stones[0];
    }
};
