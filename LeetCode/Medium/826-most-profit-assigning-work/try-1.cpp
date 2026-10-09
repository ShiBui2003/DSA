/*
 * Problem #826: Most Profit Assigning Work
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/3/2026, 11:33:06 PM
 * Link: https://leetcode.com/problems/most-profit-assigning-work/
 */

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        int m = worker.size();

        priority_queue<pair<int, int>>pq;
        for(int i = 0;i<n;i++){
            int diff = difficulty[i];
            int prof = profit[i];

            pq.push({prof,diff});
        }
        sort(begin(worker), end(worker),greater<int>());

        int i = 0;
        int totalProfit = 0;
            while(i < m && !pq.empty()){
                if(pq.top().second > worker[i]){
                    pq.pop();
                }else{
                    totalProfit += pq.top().first;
                    i++;
                }
            }
        return totalProfit;
        
    }
};
