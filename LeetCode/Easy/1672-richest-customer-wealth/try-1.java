/*
 * Problem #1672: Richest Customer Wealth
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: java
 * Date: 27/01/2024, 15:13:46
 * Link: https://leetcode.com/problems/richest-customer-wealth/
 */

class Solution {
     public int maximumWealth(int[][] accounts){
         
         int ans = Integer.MIN_VALUE;
         for(int[]ints: accounts){
            int sum = 0;
            for(int anInt:ints){
                sum+=anInt;
            } 
            if (sum>ans){
                ans=sum;
            }
         } return ans;
     }}
