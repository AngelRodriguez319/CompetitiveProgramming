
// Author: Angel Gabriel Rodriguez
// Date: May / 06 / 2021
// https://leetcode.com/problems/validate-binary-search-tree/


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
    
    bool validate(vector<int> &values){
        int aux; 
        for(int i = 0; i < values.size(); i++){
            if(i == 0){
                aux = values[i];
            }else{
                if(aux >= values[i])
                    return false;
                aux = values[i];
            }
        }
        return true;
    }
    
    void inOrder(TreeNode *root, vector<int> &values){
        if(root == nullptr) return;
        inOrder(root->left, values);
        values.push_back(root->val);
        inOrder(root->right, values);
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> values;
        inOrder(root, values);
        return validate(values); 
    }
};