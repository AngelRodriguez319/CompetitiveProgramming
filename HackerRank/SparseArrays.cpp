#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 25 / 2021
// https://www.hackerrank.com/challenges/sparse-arrays/problem

int main(){
   int n = 0, q = 0, i = 0;
   string aux;
   cin >> n;
   vector<string> input(n);
   vector<int> result;
   for(auto &x : input)
      cin >> x;
   cin >> q;
   for(i = 0; i < q; i++){
      cin >> aux;
      result.push_back(count(input.begin(), input.end(), aux));
   }
   for(auto x : result) 
      cout << x << "\n";
   return 0;
}