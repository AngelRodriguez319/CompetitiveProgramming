#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/41/A

auto main() -> int {

   string s, t;
   cin >> s >> t;

   if(s.size() != t.size()) {
      cout << "NO" << endl;
      return 0;
   }

   string reverse = t;
   int i, j;
   for(i = s.size()-1, j = 0; i >= 0; i--, j++)
      reverse[i] = t[j];

   cout << (s == reverse ? "YES" : "NO") << endl;

   return 0;
}