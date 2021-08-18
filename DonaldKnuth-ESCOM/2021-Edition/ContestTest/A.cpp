#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021

auto main() -> int { _io

   int w; cin >> w;

   if(w % 2 == 0 and w != 2)
      cout << "YES" << endl;
   else
      cout << "NO" << endl;
   
   return 0;
}