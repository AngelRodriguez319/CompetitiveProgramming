#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 02 / 2021
// https://codeforces.com/problemset/problem/1490/D

void deep(vector<int> a, int deepTree, vector<pair<int, int>> &solution){
 
   if(a.size() == 0) return;
   if(a.size() == 1){
      solution.push_back(make_pair(a[0], deepTree));
      return;
   } 
 
   auto max = max_element(a.begin(), a.end());
   vector<int> left;
   vector<int> right;
   for(auto i = a.begin(); i != max; i++)
      left.push_back(*i);
 
   for(auto i = max+1; i != a.end(); i++)
      right.push_back(*i);
 
   solution.push_back(make_pair(*max, deepTree));
   deepTree++;
 
   deep(left, deepTree, solution);
   deep(right, deepTree, solution);
}
 
int find_vector(vector<pair<int,int>> &a, int value){
   for(auto x : a)
      if(x.first == value)
         return x.second;
   return 0;
}
 
int main(){
 
   int t, n, i, deepTree = 0;
   cin >> t;
 
   while(t--){
      cin >> n;
      vector<int> a(n);
      vector<pair<int, int>> solutions;
      for(auto &x : a)
         cin >> x;
 
      deep(a, deepTree, solutions);
 
      for(auto x : a)
         cout << find_vector(solutions , x) << " ";
      cout << endl;
   }
   
   return 0;
}