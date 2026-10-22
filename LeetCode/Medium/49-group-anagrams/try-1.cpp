/*
 * Problem #49: Group Anagrams
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/04/2026, 23:24:53
 * Link: https://leetcode.com/problems/group-anagrams/
 */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mp;
        for(int i= 0;i<n;i++){
            string temp = strs[i];
            sort(begin(temp),end(temp));
            mp[temp].push_back(strs[i]);
        }
        for(auto it : mp){
            result.push_back(it.second);
        }
        return result;
    }
};
