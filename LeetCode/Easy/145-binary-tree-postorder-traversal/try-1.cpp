/*
 * Problem #145: Binary Tree Postorder Traversal
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/6/2026, 9:17:27 PM
 * Link: https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    void pot(vector<int> & ans, TreeNode* root){
        if(root == NULL){
            return;
        }
        pot(ans, root->left);
        pot(ans, root->right);
        ans.push_back(root->val);
        return;
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        pot(ans,root);
        return ans;
    }
};
