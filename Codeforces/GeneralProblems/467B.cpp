#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: June / 23 / 2021
// https://codeforces.com/problemset/problem/467/B

auto getDifferentBits(int a, int b) -> int {
   return __builtin_popcount(a ^ b);
}
 
auto main () -> int{
 
   int n, m, k, x, friends = 0;
   cin >> n >> m >> k;
 
   vector<int> army(m+1);
 
   for(auto &soldier : army)
      cin >> soldier;
 
   auto soldierFedor = army[army.size()-1];
 
   for(auto soldier : army){
      if(getDifferentBits(soldier, soldierFedor) <= k)
         friends++;
   }
   friends--;
 
   cout << friends << endl;
   return 0;
 
}