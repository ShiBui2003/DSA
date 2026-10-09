/*
 * Problem #347: Top K Frequent Elements
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/19/2026, 12:11:52 AM
 * Link: https://leetcode.com/problems/top-k-frequent-elements/
 */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int , int> mp;
        for(int &num :nums){
            mp[num]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto  &it : mp){
            int element = it.first;
            int freq = it.second;
            bucket[freq].push_back(element);
        }
        vector<int> result;
        for(int i = n;i>=0;i--){
            if(bucket[i].size() == 0)
            continue;
            while(bucket[i].size() > 0 && k > 0){
                result.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            } 
        }
        return result;
    }
};
