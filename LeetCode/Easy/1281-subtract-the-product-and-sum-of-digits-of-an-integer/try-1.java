/*
 * Problem #1281: Subtract the Product and Sum of Digits of an Integer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: java
 * Date: 20/01/2024, 22:36:17
 * Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 */


class Solution {
    public int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        while (n !=0)

        {sum+= n%10;
        product *= n%10;
        n = n/10;}
        return product-sum; 
        
        }
        
    }

