#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 13 / 2021

auto main() -> int { _io

   int n, total = 0; 
   cin >> n;
   vector<int> hability(n);

   for(auto &c : hability)
      cin >> c;

   sort(hability.begin(), hability.end());

   for(int i = 0; i < n; i+=2)
      total += abs(hability[i] - hability[i+1]);

   cout << total << endl;

   return 0;
}