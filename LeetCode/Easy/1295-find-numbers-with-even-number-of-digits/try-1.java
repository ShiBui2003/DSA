/*
 * Problem #1295: Find Numbers with Even Number of Digits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: java
 * Date: 27/01/2024, 14:36:26
 * Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 */

class Solution{
    public int findNumbers(int[]nums){
        int count = 0;
        for (int i=0; i<nums.length; i++){
            if ((nums[i]+"").length()%2==0){
                count++;
            }
        }
        return count;
    }
}
