#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/214/A

auto main() -> int {

   int n, m, a, b, solutions = 0;
   cin >> n >> m;

   for(b = 0; b <= sqrt(m); b++){
      a = m-b*b;
      if(a*a+b == n)
         solutions++;
   }

   cout << solutions << endl;
   return 0;
}