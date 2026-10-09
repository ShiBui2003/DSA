/*
 * Problem #502: IPO
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/6/2026, 11:44:04 PM
 * Link: https://leetcode.com/problems/ipo/
 */

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>>vec(n);

        for(int i = 0;i<n;i++){
            vec[i] = {capital[i],profits[i]}; 
        }
        sort(vec.begin(),vec.end());
        int i = 0;
        priority_queue<int>pq;
        while(k--){
            while(i<n && vec[i].first <= w){
                pq.push(vec[i].second);
                i++;
            }
            if(pq.empty()){
                break;
            }
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};
