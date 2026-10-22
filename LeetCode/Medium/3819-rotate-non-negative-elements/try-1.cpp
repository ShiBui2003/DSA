/*
 * Problem #3819: Rotate Non Negative Elements
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/01/2026, 08:33:55
 * Link: https://leetcode.com/problems/rotate-non-negative-elements/
 */

class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        queue<int>q;

        for(int num:nums){
            if(num>=0)
            {
                q.push(num);
            }
        }

        if(q.empty() || q.size()  == 1 ) return nums;
        int n =q.size();
        k=k%n;

        for(int i = 0;i<k;i++){
            q.push(q.front());
            q.pop();
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i] >= 0){
                nums[i] = q.front();
                q.pop();
            }
        }
        return nums;
    }
};
