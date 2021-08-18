#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 13 / 2021

auto main() -> int {

   int n, i = 1, aux, total = 0; 
   cin >> n;

   while(n--){
      cin >> aux;
      if(i == aux)
         total++;
      i++;
   }

   cout << total << endl;

   return 0;
}