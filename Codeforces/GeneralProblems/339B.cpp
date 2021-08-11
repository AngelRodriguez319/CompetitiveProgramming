#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/339/B

auto main() -> int {

   long long n, m, house;
   cin >> n >> m;

   long long actual = 1, time = 0;
   while(m--){
      cin >> house;
      if(actual != house){
         if(house < actual){
            time += n-actual+house;
         }else{
            time += house-actual;
         }
         actual = house;
      }
   }

   cout << time << endl;
   return 0;
}