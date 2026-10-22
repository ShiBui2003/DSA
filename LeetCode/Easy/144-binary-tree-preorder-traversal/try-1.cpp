/*
 * Problem #144: Binary Tree Preorder Traversal
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/07/2026, 21:47:03
 * Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorderfun(vector<int>& preorder,TreeNode* root){
        if(root == NULL){
            return;
            }
            preorder.push_back(root->val);
            preorderfun(preorder,root->left);
            preorderfun(preorder,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root){
        vector<int>preorder;
        preorderfun(preorder,root);
        return preorder;
    }
    
};
