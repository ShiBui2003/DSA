/*
 * Problem #1920: Build Array from Permutation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: java
 * Date: 04/02/2024, 01:08:49
 * Link: https://leetcode.com/problems/build-array-from-permutation/
 */

class Solution {
    public int[] buildArray(int[] nums) {
        int arr[]=new int[nums.length];
        
        for(int i=0;i<nums.length;i++)
           {arr[i]=nums[nums[i]]; }
        
        return arr;
    }}
