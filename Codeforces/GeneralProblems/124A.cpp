#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/124/A

auto main() -> int {

   int n, a, b;
   cin >> n >> a >> b;

   int pos = n - a;
   cout << std::min(pos, b+1) << endl;


   return 0;
}