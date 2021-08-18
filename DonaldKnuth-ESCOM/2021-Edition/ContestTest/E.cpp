#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 11 / 2021

auto main() -> int { _io

   long long N;
   cin >> N;

   vector<char> letters(N);
   for(auto &letter : letters)
      cin >> letter;

   sort(letters.begin(), letters.end());

   for(auto letter : letters)
      cout << letter;

   cout << endl;
   return 0;
}