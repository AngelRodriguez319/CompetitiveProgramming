#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/215/A

auto main() -> int {

   int n, m, max = 0;
   cin >> n;
   vector <int> an(n);

   for(auto &teeth : an)
      cin >> teeth;

   cin >> m;
   vector <int> am(m);

   for(auto &teeth : am)
      cin >> teeth;

   map<int, int> count;

   for(auto teethM : am){      
      for(auto teethN : an){
         if(teethM % teethN == 0){
            max = std::max(max, teethM / teethN);
            count[teethM/teethN]++;
         }
      }

   }

   cout << count[max] << endl;   
   return 0;
}