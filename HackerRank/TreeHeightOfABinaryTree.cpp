// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://www.hackerrank.com/contests/being-zero/challenges/tree-height-of-a-binary-tree

int dfs(Node * root, int count) {
   if (root == nullptr) 
      return count;
   else 
      return max({dfs(root -> left, count + 1), dfs(root -> right, count + 1)});
}

int height ( Node* root, int level = 0 ) {
   if (root == nullptr) 
      return level;
      
   return max({dfs(root -> left, 0), dfs(root -> right, 0)});
}