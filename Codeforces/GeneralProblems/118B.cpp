#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 13 / 2021
// https://codeforces.com/problemset/problem/118/B

auto main() -> int { _io

   int n, m, i, k; 
   cin >> n;
   m = n;

   k = 1;
   while(m >= 0) {
      for(i = 0; i < 2*m; i++)
         cout << " ";

      for(i = 0; i < k-1; i++)
         cout << i << " ";

      for(i = k-1; i >= 0; i--){
         cout << i; 
         if(i != 0)
            cout << " ";
      }
      
      cout << endl;
      k += 1;
      m--;
   }

   m = 1;
   k = 2*n-1;
   while(m <= n) {

      for(i = 0; i < 2*m; i++)
         cout << " ";
      
      for(i = 0; i < k/2; i++)
         cout << i << " ";

      for(i = k/2; i >= 0; i--){
         cout << i;
         if(i != 0)
            cout << " ";
      }

      cout << endl;
      k -= 2;
      m++;
   }
   
   return 0;
}