/*
 * Problem #904: Fruit Into Baskets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/05/2026, 07:15:28
 * Link: https://leetcode.com/problems/fruit-into-baskets/
 */

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    int i = 0 , j = 0; 
    int n = fruits.size();
    unordered_map<int,int> mp;
    int count = 0;


    while(j<n){
        mp[fruits[j]]++;

        if(mp.size() <= 2){
            count = max(count, j-i+1);
        } 
        else{
            mp[fruits[i]]--;
            if(mp[fruits[i]]== 0){
                mp.erase(fruits[i]);
            }
            i++;
        }       
        j++;
      }
      return count;
    }
};
