/*
 * Problem #1962: Remove Stones to Minimize the Total
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 18:12:27
 * Link: https://leetcode.com/problems/remove-stones-to-minimize-the-total/
 */

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n = piles.size();
        priority_queue<int>pq;
        int sum = 0;
        for(int i = 0;i<n;i++){
            pq.push(piles[i]);
            sum += piles[i];
        }
        for(int i =1;i<=k;i++){
            int max_el = pq.top();
            pq.pop();
            int remove = max_el/2;   
            sum -= remove;
            max_el -= remove;
            pq.push(max_el);
             }
             return sum;
    }
};
