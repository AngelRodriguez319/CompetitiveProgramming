#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 09 / 2021
// https://codeforces.com/problemset/problem/34/A

auto main() -> int {

   int n, min = INT_MAX, x, y; 
   cin >> n;
   vector<int> heights(n);

   for(auto &height : heights)
      cin >> height;

   heights.push_back(heights[0]);

   for(int i = 0; i < n; i++){
      if(abs(heights[i] - heights[i+1]) < min){
         min = abs(heights[i] - heights[i+1]);
         x = i+1;
         (i+1 == n) ? y = 1 : y = i+2;
      }
   }

   cout << x << " " << y << endl;
   return 0;
}