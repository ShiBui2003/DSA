/*
 * Problem #81: Search in Rotated Sorted Array II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/04/2025, 23:46:56
 * Link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
 */

class Solution {
public:
    int search(vector<int>& arr, int k) {
        int low = 0, high = arr.size()-1;
        while(low <= high){
            int mid =(low + high) / 2;
            if(arr[mid] == k) return true;
            if(arr[low] == arr[mid] && arr[mid] ==arr[high]){
                low++,high--;
                continue;
            }

            if(arr[low] <= arr[mid]){
                if(arr[low] <=k && k <=arr[mid]){
                    high = mid - 1;
                }
                else{
                    low =mid + 1;
                }
            }
            else{
                if(arr[mid] <= k && k<= arr[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            
        }
         return false;
    }
};
