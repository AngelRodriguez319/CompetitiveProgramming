
// Author: Angel Gabriel Rodriguez
// Date: May / 03 / 2021
// https://leetcode.com/problems/same-tree/


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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode *> toCheckP;
        queue<TreeNode *> toCheckQ;
        
        if(p == nullptr && q == nullptr){
            return true;
        }else if(p == nullptr || q == nullptr){
            return false;
        }
        
        toCheckP.push(p);
        toCheckQ.push(q);
        TreeNode *currentP, *currentQ;
        
        while(!toCheckP.empty() && !toCheckQ.empty()){
            currentP = toCheckP.front();
            currentQ = toCheckQ.front();
            toCheckP.pop();
            toCheckQ.pop();
            
            
            if(currentP->val != currentQ->val){
                return false;
            }
            
            if(currentP->left != nullptr && currentQ->left != nullptr){
                toCheckP.push(currentP -> left);
                toCheckQ.push(currentQ -> left);
            }else if(currentP->left != nullptr || currentQ->left != nullptr){
                return false;
            }
            
            if(currentP->right != nullptr && currentQ->right != nullptr){
                toCheckP.push(currentP -> right);
                toCheckQ.push(currentQ -> right);
            }else if(currentP->right != nullptr || currentQ->right != nullptr){
                return false;
            }
            
        }
        
        if(!toCheckP.empty() || !toCheckQ.empty()){
            return false;
        }
        
        return true;
        
    }
};