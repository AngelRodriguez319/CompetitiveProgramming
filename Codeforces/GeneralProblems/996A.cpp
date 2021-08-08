#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 17 / 2021
// https://codeforces.com/problemset/problem/996/A

auto main() -> int {
 
   int n, sum = 0, i = 0; 
   cin >> n;
 
   vector<int> bills = {100,20,10,5,1};
   while(n > 0){
      sum += n/bills[i];
      n = n % bills[i];
      i++;
   }
   cout << sum << "\n";
   return 0;
 
}