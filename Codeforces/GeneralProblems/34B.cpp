#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/34/B

auto main() -> int {

   int n, m;
   cin >> n >> m;

   vector<int> prices(n);
   for(auto &price : prices)
      cin >> price;

   sort(prices.begin(), prices.end());
   
   int moneyEarned = 0;
   for(auto price : prices){
      if(m > 0)
         if(price <= 0)
            moneyEarned += price;
         else
            break;
      else
         break;
      m--;
   }

   cout << abs(moneyEarned) << endl;
   return 0;
}