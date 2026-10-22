/*
 * Problem #283: Move Zeroes
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/09/2024, 01:39:21
 * Link: https://leetcode.com/problems/move-zeroes/
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if (nums[i] !=0){
                temp.push_back(nums[i]);
            }
        }
        int nz=temp.size();
        for(int i=0;i<nz;i++){
            nums[i]=temp[i];
        }
        for(int i=nz; i<nums.size();i++){
            nums[i]=0;
        }
        

    }
};
