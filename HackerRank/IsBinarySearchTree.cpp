// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://www.hackerrank.com/contests/being-zero/challenges/is-binary-search-tree

bool check (Node * root, int min, int max) {
   if(root -> left == nullptr && root -> right == nullptr) 
      return true;
   
   int data = root -> data;
   if (root -> left != nullptr && root -> right != nullptr) {
        
      if (root -> left -> data < data && root -> left -> data > min && root -> right -> data > data && root -> right -> data < max) {
         return check(root -> right, data, max) && check(root -> left, min, data);
      } else return false;
   
   } else if (root -> left == nullptr && root -> right != nullptr) {
      if (root -> right -> data > data && root -> right -> data < max) 
         return check(root -> right, data, max);
      else return false;
   
   } else if (root -> right == nullptr && root -> left != nullptr) {

      if (root -> left -> data < data && root -> left -> data > min) 
         return check(root -> left, min, data);
      else return false;
   
   }
   return true;
}

bool checkBST(Node* root) {
   if(root == nullptr) 
      return true;
   
   if(root -> left == nullptr && root -> right == nullptr) 
      return true;
     
   int data = root -> data;
   if (root -> left != nullptr && root -> right != nullptr) {

      if (root -> left -> data < data && root -> right -> data > data) {
         return check(root -> right, data, 2147483647) && check(root -> left, -2147483648, data);
      } else return false;
   
   } else if (root -> left == nullptr && root -> right != nullptr) {
      
      if (root -> right -> data > data) 
         return check(root -> right, data, 2147483647);
      else return false;
   
   } else if (root -> right == nullptr && root -> left != nullptr) {
      
      if (root -> left -> data < data) 
         return check(root -> left, -2147483648, data);
      else return false;
   
   }
   return true;
}