#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 17 / 2021
// https://www.hackerrank.com/contests/code-quest-2/challenges/largest-rectangle/problem

int main(){

   int n; cin >> n;
   vector<int> h(n);
   vector<int> results;

   for(auto &x : h)
      cin >> x;

   int adjacent = 0;
   int j = 0;
   for(int i = 0; i < n; i++){
      j = i;
      while(h[i] <= h[j] && i != n-1 && j <= n-1){
         adjacent++;
         j++;
      }
      j = i;
      while(h[i] <= h[j] && i != 0 && j >= 0){
         adjacent++;
         j--;
      }
      results.push_back((adjacent-1) * h[i]);
      adjacent = 0;
   }
   cout << *max_element(results.begin(), results.end()) << "\n";  

   return 0;
}