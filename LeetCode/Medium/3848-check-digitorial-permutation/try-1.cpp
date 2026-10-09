/*
 * Problem #3848: Check Digitorial Permutation
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/13/2026, 12:34:23 PM
 * Link: https://leetcode.com/problems/check-digitorial-permutation/
 */

class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int> fac(10,1);
        for(int i = 2;i<=9;i++){
            fac[i] = fac[i-1] * i;
        }
        string s = to_string(n);
        int total = 0;
        vector<int>freq(10,0);
        for(char c : s){
            int digit = c - '0';
            total += fac[digit];
            freq[digit]++;
        }
        string t= to_string(total);
        for(char c :t){
            int digit = c - '0';
            if(freq[digit]){
                freq[digit]--;
            }
            else{
                return false;
            }
        }
        for(int i : freq){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
};
