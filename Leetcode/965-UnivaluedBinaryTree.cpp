
// Author: Angel Gabriel Rodriguez
// Date: May / 04 / 2021
// https://leetcode.com/problems/univalued-binary-tree/


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
    
    void preorder(TreeNode* root, bool &flag, int value){
        if(root == nullptr) return;
        if(root->val != value){
            flag = false;
            return;
        }
        preorder(root->left, flag, value);
        preorder(root->right, flag, value);
    }
    
    bool isUnivalTree(TreeNode* root) {
        bool flag = true;
        int value = root->val;
        preorder(root, flag, value);
        return flag;
    }
};