#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 09 / 2021
// https://codeforces.com/problemset/problem/318/A

auto main() -> int {

   long long int n, k, res = 0, size = 0;
   cin >> n >> k;

   if(n%2 == 0){
      size = (n/2)+1;
      if(k < size){
         res = k*2 - 1;
      }else{
         k -= n/2;
         res = k*2; 
      }

   }else{
      size = n-(n/2)+1;
      if(k < size){
         res = k*2 - 1;
      }else{
         k -= n-(n/2);
         res = k*2;
      }

   }

   cout << res << endl;
   return 0;
}
