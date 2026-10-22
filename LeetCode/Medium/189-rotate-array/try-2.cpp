/*
 * Problem #189: Rotate Array
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 08/09/2024, 16:40:51
 * Link: https://leetcode.com/problems/rotate-array/
 */

class Solution 
{ 
    public: void rotate(vector<int>& nums, int k) 
{
    
     vector<int> temp(nums.size()); 
     for (int i = 0; i < nums.size(); i++) 
     { 
        temp[(i + k) % nums.size()] = nums[i]; 
        
         } 
     nums = temp; 
     } 
    };
