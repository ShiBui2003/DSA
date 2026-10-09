/*
 * Problem #2187: Minimum Time to Complete Trips
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/26/2026, 8:20:28 PM
 * Link: https://leetcode.com/problems/minimum-time-to-complete-trips/
 */

class Solution {
public:
    bool poss(vector<int> &time,long long givenTime,int totalTrips){
        long long actTrips = 0;

        for(int  &t : time){
            actTrips += givenTime/t;
        }
        return actTrips >= totalTrips;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        long long l = 1;
        long long r = (long long) *min_element(begin(time),end(time)) * totalTrips;

        while(l < r){
            long long mid_time =  l + (r - l) / 2;
            if(poss(time,mid_time,totalTrips)){
                r = mid_time;
            }
            else{
                l = mid_time + 1;
            }
        }
        return l;
    }
};
