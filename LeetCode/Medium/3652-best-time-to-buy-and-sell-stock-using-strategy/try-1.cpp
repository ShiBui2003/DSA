/*
 * Problem #3652: Best Time to Buy and Sell Stock using Strategy
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/1/2026, 5:08:27 PM
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-using-strategy/
 */

class Solution {
public:
    typedef long long ll;

    ll maxProfit(vector<int>& prices, vector<int>& strategy, int k){
        int n = prices.size();
        ll actualProfit = 0;
        vector<ll> profit(n);

        for(int i = 0; i < n;i++){
            profit[i] = (ll)strategy[i] * prices[i];
            actualProfit += profit[i];
        }
        ll oriWinProfit = 0;
        ll modWinProfit = 0;
        ll maxGain = 0;
        int i = 0, j = 0;

        while(j < n){
            oriWinProfit += profit[j];

            if(j - i + 1 > k/2){
                modWinProfit += prices[j];
            }

            if(j - i + 1 > k){
                oriWinProfit -= profit[i];
                modWinProfit -= prices[i + k/2];
                i++;
            }
             if(j - i + 1 == k){
                maxGain = max(maxGain, modWinProfit - oriWinProfit);
             }
             j++;
        }
        return actualProfit + maxGain;
    }

};
