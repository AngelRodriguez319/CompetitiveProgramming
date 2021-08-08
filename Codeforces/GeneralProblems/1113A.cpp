#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 24 / 2021
// https://codeforces.com/problemset/problem/1113/A

auto main() -> int{
 
   int n, v, res = 0;
   cin >> n >> v;
 
   int p = n-1, i = 2;
   if((p-v) <= 0){
      cout << p << endl;
      return 0;
   }
   res += v;
   p--;
   while(p >= v){
      res += i;
      p--;
      i++; 
   }
 
   cout << res << endl;
   return 0;
 
}