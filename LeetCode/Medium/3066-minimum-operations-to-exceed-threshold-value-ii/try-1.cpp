/*
 * Problem #3066: Minimum Operations to Exceed Threshold Value II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/23/2026, 2:01:44 AM
 * Link: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/
 */

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
         priority_queue<long,vector<long>,greater<long>>pq(begin(nums),end(nums));
            int count = 0;
            while(!pq.empty() && pq.top() < k){
            long long  smallest = pq.top();
            pq.pop();
            long long secondSmallest  = pq.top();
            pq.pop();

            pq.push(smallest*2 +secondSmallest) ;
            count++;
            }
            return count;
    }
};
