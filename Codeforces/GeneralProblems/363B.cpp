#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 30 / 2021
// https://codeforces.com/problemset/problem/363/B

auto slidingWindow(vector<int> &array, int k) -> int {
 
   pair<int, int> position_min = make_pair(0 , 1e9);
   int sum = 0;
 
   for(int i = 0; i < k; i++)
      sum += array[i];
 
   if(sum < position_min.second){
      position_min.second = sum;
      position_min.first = 1;
   }
 
   for(int i = k; i < array.size(); i++){
      sum += array[i];
      sum -= array[i - k];
      if(sum < position_min.second){
         position_min.second = sum;
         position_min.first = i-k+2;
      }
   }
   return position_min.first;
}
 
auto main() -> int{ 
 
   int n, k;
   cin >> n >> k;
   vector<int> heights(n, 0);
 
   for(auto &c : heights)
      cin >> c;
 
   cout << slidingWindow(heights, k) << endl;
 
   return 0;
}