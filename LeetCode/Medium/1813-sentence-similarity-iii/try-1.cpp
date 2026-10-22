/*
 * Problem #1813: Sentence Similarity III
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/10/2024, 17:00:05
 * Link: https://leetcode.com/problems/sentence-similarity-iii/
 */

class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> words1, words2;
        stringstream ss1(sentence1), ss2(sentence2);
        string word;
        while (ss1 >> word) {
            words1.push_back(word);
        }
        while (ss2 >> word) {
            words2.push_back(word);
        }
        int i = 0, j = 0, k = words1.size() - 1, l = words2.size() - 1;
        while (i <= k && j <= l && words1[i] == words2[j]) {
            i++;
            j++;
        }
        while (i <= k && j <= l && words1[k] == words2[l]) {
            k--;
            l--;
        }
        return i > k || j > l;
    }
};
