/*
 * Problem #3813: Vowel-Consonant Score
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/01/2026, 08:14:25
 * Link: https://leetcode.com/problems/vowel-consonant-score/
 */

class Solution {
public:
    int vowelConsonantScore(string s) {
        
        int vowel = 0;
        int constant = 0;

        for(char ch : s){
            if(isalpha(ch)){
                if(ch == 'a' || ch == 'e'|| ch=='i' || ch == 'o'||ch=='u'){
                    vowel++;
                }else{
                    constant++;
                }
            }
    }
    if(constant>0){
    return vowel/constant;
    }else{
    return 0;
    }
    }
};
