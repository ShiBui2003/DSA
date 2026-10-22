/*
 * Problem #1482: Minimum Number of Days to Make m Bouquets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/06/2025, 20:03:11
 * Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
 */

class Solution {
public:

    bool possible(const vector<int>arr, int day, int m, int k){
        int cnt = 0;
        int bloom = 0;
        for(int i = 0; i<arr.size();i++){
            if(arr[i] <= day){
                cnt++;
            }
            else{
                bloom += (cnt / k );
                cnt = 0;
            }
        }
        bloom += (cnt / k);
        return bloom >= m;
    }
    int minDays(vector<int>& arr, int m, int k) {
    long long val = 1LL*m*k;
    if(val > arr.size()) return -1;

    int mini = INT_MAX, maxi = INT_MIN;
    for(int i = 0; i<arr.size();i++){
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    int low = mini, high = maxi;
    while(low < high){
        int mid = (low + high) / 2;
        if(possible(arr, mid, m, k)){
            high = mid ;
        }
        else low = mid + 1;
    }
    return low;
        }
};
