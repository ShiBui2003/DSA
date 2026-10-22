/*
 * Problem #451: Sort Characters By Frequency
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 28/09/2025, 01:11:59
 * Link: https://leetcode.com/problems/sort-characters-by-frequency/
 */

class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(128,0);
        for(auto ch : s) freq[ch]++;

        auto cmp = [&] (char a, char b){
            if(freq[a] == freq[b]) return a<b;
            return freq[a] > freq[b];
        };
        sort(s.begin(),s.end(), cmp);

        return s;
    }
};
