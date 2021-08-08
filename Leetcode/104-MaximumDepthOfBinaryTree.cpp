
// Author: Angel Gabriel Rodriguez
// Date: May / 04 / 2021
// http://leetcode.com/problems/maximum-depth-of-binary-tree


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
    
    void deep(TreeNode *root, int deepTree, vector<int> &sol){
        if(root == nullptr) return;
        sol.push_back(deepTree);
        deepTree++;
        deep(root->left, deepTree, sol);
        deep(root->right, deepTree, sol);
    }
    
    int maxDepth(TreeNode* root) {
        vector<int> sol;
        deep(root, 1, sol);
        if(root == nullptr)
            return 0;
        else
            return *(std::max_element(sol.begin(), sol.end()));
    }
};