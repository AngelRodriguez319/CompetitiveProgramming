#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/149/A

auto main() -> int {

   int k, total = 0, i = 0; 
   cin >> k;
   vector<int> months(12);

   for(auto &month : months)
      cin >> month;

   sort(months.rbegin(), months.rend());

   while(k > 0 && i < 12){
      k -= months[i];
      total++;
      i++;
   }

   if(k > 0)
      cout << "-1" << endl;
   else
      cout << total << endl;

   return 0;
}