#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/4/A

int main(){
   int kg;
   cin >> kg;

   if(kg == 2){
      cout << "NO\n";
      return 0;
   }
   cout << (kg%2 == 0 ? "YES" : "NO") << "\n";
   return 0;
}