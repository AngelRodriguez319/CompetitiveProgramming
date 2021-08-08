#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/4/C

auto main () -> int {

   int t; cin >> t;
   map<string, int> numbers;

   while(t--){
      string name;
      cin >> name;

      if(numbers.count(name) > 0){
         cout << name << numbers[name] << endl;
         numbers[name] += 1;
      }else{
         numbers.insert(pair<string, int>(name, 1));
         cout << "OK" << endl;
      }
   }

   return 0;
}