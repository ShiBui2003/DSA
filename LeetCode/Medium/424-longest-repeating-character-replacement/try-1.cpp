/*
 * Problem #424: Longest Repeating Character Replacement
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/02/2026, 17:56:37
 * Link: https://leetcode.com/problems/longest-repeating-character-replacement/
 */

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int left = 0 , right =0;
        int maxCount = 0;
        int maxLength = 0;
        while(right <s.size()){
            freq[s[right] -'A']++;
            maxCount = max(maxCount,freq[s[right] - 'A']);

        while((right - left + 1) - maxCount > k){
            freq[s[left] - 'A']--;
            left++;
            }
            maxLength = max(maxLength,right - left + 1);
            right++;
        }
        return maxLength;
    }
};
