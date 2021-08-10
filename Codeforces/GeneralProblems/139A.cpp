#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 09 / 2021
// https://codeforces.com/problemset/problem/139/A

auto main() -> int {

   int n, i = 1; 
   cin >> n;
   vector<int> days(7);

   for(auto &day : days)
      cin >> day;

   while(n > 0){
      n -= days[i-1];
      if(i == 7 && n > 0)
         i = 0;
      if(n > 0)
         i++; 
   }

   cout << i << endl;
   return 0;
}