#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 05 / 2021
// https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    
    Node *search(Node *root, int value){
        if(root == NULL) return NULL; 
        if(value == root->data) return root;
        if(value < root->data )
            return search(root->left , value);
        else
            return search(root->right, value);
    }
    
    void getAncestor(Node *root, vector<int> &sol, int value){
        if( root == NULL ) return;
        sol.push_back(root->data);
        if(root->data == value) return;
        
        if(value < root->data)
            getAncestor(root->left, sol, value);
        else
            getAncestor(root->right, sol, value);
    }
    
    Node *lca(Node *root, int v1,int v2) {
        vector<int> vector1, vector2;
        getAncestor(root, vector1, v1);
        getAncestor(root, vector2, v2);
        
        if(vector1.size() > vector2.size()){
            
            for(int i = vector1.size()-1; i >= 0; i--){
                int common = count(vector2.begin(), vector2.end(), vector1[i]);
                if(common > 0){
                    return search(root, vector1[i]);
                }
            }
            
        }else{
            
            for(int i = vector2.size()-1; i >= 0; i--){
                int common = count(vector1.begin(), vector1.end(), vector2[i]);
                if(common > 0){
                    return search(root, vector2[i]);
                }
            }
              
        }
        
        return NULL;
        
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
  	int v1, v2;
  	std::cin >> v1 >> v2;
  
    Node *ans = myTree.lca(root, v1, v2);
    
  	std::cout << ans->data;

    return 0;
}

