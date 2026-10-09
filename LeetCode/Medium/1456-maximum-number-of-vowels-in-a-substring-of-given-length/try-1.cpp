/*
 * Problem #1456: Maximum Number of Vowels in a Substring of Given Length
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/9/2026, 2:14:24 PM
 * Link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
 */

class Solution {
public:
    bool isVowel(char &ch){
        return ch == 'a' ||ch =='e' || ch == 'i' ||ch== 'o' ||ch == 'u';
    }


    int maxVowels(string s, int k) {
        int n = s.size();
        int i = 0, j = 0;
        int maxV = 0;
         int count  = 0;
         while(j<n){
            if(isVowel(s[j]))
            count++;
            if(j-i+1 == k){
                maxV = max(maxV,count);
                if(isVowel(s[i]))
                count--;
                i++;
            }
            j++;
         }
        return maxV;

    }
};
