/*
 * Problem #1011: Capacity To Ship Packages Within D Days
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/06/2025, 23:32:24
 * Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
 */

class Solution {
public:
    int leastD(vector<int>& weights, int limit){
        int days =1, load = 0;
        for(int i = 0; i<weights.size();i++){
            if(weights[i] + load > limit){
                days+=1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
     int low  = *max_element(weights.begin(), weights.end());
     int high = accumulate(weights.begin(),weights.end(),0);
     while (low <= high){
        int mid = (low + high) / 2;
        int numberOfDays = leastD(weights, mid);
        if(numberOfDays <= days){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
     }   
     return low;
    }
};
