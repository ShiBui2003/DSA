/*
 * Problem #1358: Number of Substrings Containing All Three Characters
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/5/2026, 10:22:45 PM
 * Link: https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
 */

class Solution {
public:
    int numberOfSubstrings(string s) {
       vector<int> freq(3,0);
       int res = 0;
       int left = 0;
       for(int right=0;right<s.length();right++){
        freq[s[right] - 'a']++;

        while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0){
            res += (s.length() - right);
            freq[s[left] - 'a']--;
            left++;
         }
       }
       return res;
    }
};
