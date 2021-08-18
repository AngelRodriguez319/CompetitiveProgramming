#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 13 / 2021
// https://codeforces.com/problemset/problem/337/A

auto main() -> int { _io

   int n, m, i, min = INT_MAX;
   cin >> n >> m;

   vector<int> puzzles(m);

   for(auto &puzzle : puzzles)
      cin >> puzzle;

   sort(puzzles.begin(), puzzles.end());

   for(i = 0; i <= m-n; i++)
      min = std::min(min, puzzles[n-1+i] - puzzles[i]);

   cout << min << endl;
   return 0;
}