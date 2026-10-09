/*
 * Problem #295: Find Median from Data Stream
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/13/2026, 12:49:17 AM
 * Link: https://leetcode.com/problems/find-median-from-data-stream/
 */

class MedianFinder {
public:
    priority_queue<int> left_max_heap; //max heap
    priority_queue<int, vector<int>, greater<int>> right_min_heap; //min heap
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left_max_heap.empty() || num < left_max_heap.top()) {
            left_max_heap.push(num);
        } else {
            right_min_heap.push(num);
        }
        
        
        
        
        if(abs((int)left_max_heap.size() - (int)right_min_heap.size()) > 1) {
            right_min_heap.push(left_max_heap.top());
            left_max_heap.pop();
        } else if(left_max_heap.size() < right_min_heap.size()) {
            left_max_heap.push(right_min_heap.top());
            right_min_heap.pop();
        }
        
    }
    
    double findMedian() {
        if(left_max_heap.size() == right_min_heap.size()) {            
            return (double)(left_max_heap.top()+right_min_heap.top())/2;
        }
        
        return left_max_heap.top();
    }
};

