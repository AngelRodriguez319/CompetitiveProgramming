#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/1454/A

int main(){

   int t, n, i, current, before;
   vector<int> p;
   cin >> t;

   while(t--){
      cin >> n;
      for(i = n; i > 0; i--){
         p.push_back(i);
      }
      if(n % 2 == 1){
         before = p[(n/2)-1];
         current = p[n/2];

         p[(n/2)-1] = current;
         p[n/2] = before;
      }
      for(auto x : p)
         cout << x << " ";
      cout << "\n";
      p.clear();
   }

   return 0;
}