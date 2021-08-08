
// Author: Angel Gabriel Rodriguez
// Date: May / 17 / 2021
// https://leetcode.com/problems/binary-tree-paths/


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
    
    void getLeafs(TreeNode *root, vector<vector<int>> &values, vector<int> save){
        if(root == nullptr) return;
        save.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr)
            values.push_back(save);
        getLeafs(root->left, values, save);
        getLeafs(root->right, values, save);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> res;
        vector<string> solve;
        string aux;
        
        getLeafs(root, res, {});
        
        for(int i = 0; i < res.size(); i++){
            aux = "";
            for(int j = 0; j < res[i].size(); j++){
                aux += to_string(res[i][j]);
                if(j != res[i].size()-1) aux += "->";
            }
            solve.push_back(aux);
        }
        
        return solve;
    }
};