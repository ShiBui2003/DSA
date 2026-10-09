/*
 * Problem #455: Assign Cookies
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/20/2026, 11:39:54 PM
 * Link: https://leetcode.com/problems/assign-cookies/
 */

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int sIndex = 0;
        int gIndex = 0;
        while(sIndex < s.size() && gIndex < g.size()){
            if(s[sIndex] >=g[gIndex]){
                gIndex++;
            }
            sIndex++;
        }
        return gIndex;
    }
};
