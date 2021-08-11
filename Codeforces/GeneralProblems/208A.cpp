#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/208/A

auto main() -> int {

   string mix, original = "", aux;
   cin >> aux;

   mix += "WUB" + aux + "WUB";

   int i = 0;
   while(i < mix.size()) {
      if(mix.substr(i,3) == "WUB"){
         i+=3;
      }else{
         while(mix.substr(i,3) != "WUB"){
            original += mix[i];
            i++;
         }
         original += " ";
      }
   }

   cout << original << endl;
   return 0;
}