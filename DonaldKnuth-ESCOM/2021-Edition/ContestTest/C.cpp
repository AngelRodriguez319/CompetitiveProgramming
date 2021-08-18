#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021

auto main() -> int { _io

   int n = 0, x = 0; 
   cin >> n;

   string aux;
   while(n--){
      cin >> aux;
      if(aux[0] == '+')
         x++;
      else if(aux[0] == '-')
         x--;
      else
         (aux[1] == '+') ? x++ : x--;
   }

   cout << x << endl;
   return 0;
}