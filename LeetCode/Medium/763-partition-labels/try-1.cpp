/*
 * Problem #763: Partition Labels
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/24/2026, 3:11:07 PM
 * Link: https://leetcode.com/problems/partition-labels/
 */

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();

        vector<int> result;
        vector<int> mp(26, -1);
        for(int i = 0; i < n; i++) {
            int idx = s[i] - 'a';
            mp[idx] = i;
        }

        int i = 0;
        while(i < n) {
            int end = mp[s[i]-'a'];

            int j = i;
            while(j < end) {
                end = max(end, mp[s[j]-'a']);
                j+=1;
            }
            result.push_back(j-i+1);
            i = j+1;
        }

        return result;
    }
};

