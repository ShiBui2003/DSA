/*
 * Problem #3217: Delete Nodes From Linked List Present in Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/11/2025, 15:37:35
 * Link: https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* dummy =new ListNode(-1);

        dummy->next = head;
        ListNode* curr= head;
        ListNode* prev = dummy;

        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        while(curr!=NULL){
           if(mp.find(curr->val)!=mp.end()){
            ListNode* nextNode = curr->next;

            prev->next = nextNode;
            curr=nextNode;
           }
           else{
            prev =curr;
            curr=curr->next;
           }
        }
        return dummy->next;
    }
};
