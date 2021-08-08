#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://atcoder.jp/contests/abc176/tasks/abc176_b?lang=en

auto main() -> int{ 

   string N;
   cin >> N;
   int sum = 0;

   for(auto c : N) 
      sum += c - '0';
   
   cout << (sum%9 == 0 ? "Yes" : "No") << endl;

   return 0;
}