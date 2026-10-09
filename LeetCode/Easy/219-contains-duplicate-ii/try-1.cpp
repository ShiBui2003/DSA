/*
 * Problem #219: Contains Duplicate II
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/8/2026, 7:28:09 PM
 * Link: https://leetcode.com/problems/contains-duplicate-ii/
 */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_set<int> st;
        int i = 0 , j=0;
        while(j<n){
            if(abs(i-j) > k){
                st.erase(nums[i]);
                i++;
            }
            if(st.find(nums[j]) != st.end()){
                return true;
            }
            st.insert(nums[j]);
            j++;
            
        }
        return false;
    }
};
