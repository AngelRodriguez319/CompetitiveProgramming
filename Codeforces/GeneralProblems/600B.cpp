#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/600/B

auto binarySearch(vector<int> &arr, int toFind) -> int {
  int l = 0, r = arr.size() - 1;
  while (l <= r) {
    int m = l + (r - l) / 2;
    if (toFind < arr[m]) {
      r = m - 1;
    } else {
      l = m + 1;
    }
  }
  return l;
}

auto main() -> int {

   int n, m; 
   cin >> n >> m;

   vector<int> a(n), b(m);

   for(auto &c : a) cin >> c;
   for(auto &c : b) cin >> c;

   sort(a.begin(), a.end());

   for(auto &c : b){
      cout << binarySearch(a, c) << " ";
   }
   cout << "\n";

   return 0;
}