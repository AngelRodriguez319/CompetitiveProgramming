#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 25 / 2021
// https://www.hackerrank.com/challenges/array-left-rotation/problem

int main(){
   int n = 0, d = 0, i = 0, save = 0;
   cin >> n >> d;
   vector<int> list (n);
   for(auto &x : list)
      cin >> x;
   while(d != 0 && d != n){
      save = list[0]; 
      list.erase(list.begin());
      list.push_back(save);
      d--;
   } 
   for(auto x : list)
      cout << x << " ";
   cout << "\n";
   return 0;
}