#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/96/A

auto main() -> int {

   string marks;
   cin >> marks;

   bool isOne = false;
   int howManyOnes = 0, howManyZeros = 0;

   for(auto position : marks){
      if(position == '1'){
         howManyZeros = 0;
         isOne = true;
      }else{
         howManyOnes = 0;
         isOne = false;
      }

      if(position == '1' and isOne)
         howManyOnes++;
      else if(position == '0' and !isOne)
         howManyZeros++;

      if(howManyOnes >= 7 or howManyZeros >= 7){
         cout << "YES" << endl;
         return 0;
      }
   }

   cout << "NO" << endl;
   return 0;
}