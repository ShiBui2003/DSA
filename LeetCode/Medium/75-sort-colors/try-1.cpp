/*
 * Problem #75: Sort Colors
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2025, 23:08:52
 * Link: https://leetcode.com/problems/sort-colors/
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 =0;
        for(int num : nums){
            if(num == 0) count0++;
            else if (num == 1) count1++;
            else count2 ++;
        }
        for(int i= 0;i<count0;i++) nums[i]= 0;

        for(int i= count0;i<count0 + count1;i++) nums[i] = 1;
        
        for( int i = count0 + count1; i <nums.size(); i++) nums[i] = 2;
    }
};
