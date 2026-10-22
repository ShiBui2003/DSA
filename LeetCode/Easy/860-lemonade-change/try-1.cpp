/*
 * Problem #860: Lemonade Change
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/03/2026, 22:09:55
 * Link: https://leetcode.com/problems/lemonade-change/
 */

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for(int i = 0;i<bills.size();i++){
            if(bills[i] == 5){
            five++;
        }
        else if (bills[i] == 10)
        {
            if(five > 0)
            {
                five--;
                ten++;
            }
            else {
                return false;
            }
        }
            else{
                if(ten > 0 && five > 0){
            ten--;
            five--;
            }
            else if(five >= 3){
                five -= 3;
            }
            else{
                return false;
            }
        }
    }
        return true;
    }
};
