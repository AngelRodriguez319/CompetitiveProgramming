#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021

auto main() -> int { _io

   int n; cin >> n;

   string aux;
   while(n--){
      cin >> aux;
      if(aux.size() > 10)
         cout << aux[0] << aux.size()-2 << aux[aux.size()-1] << endl;
      else
         cout << aux << endl;
   }

   return 0;
}