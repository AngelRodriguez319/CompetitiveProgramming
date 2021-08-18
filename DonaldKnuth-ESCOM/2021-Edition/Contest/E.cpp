#include <bits/stdc++.h>
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 13 / 2021

auto giveMeBit(int num, int pos) -> int {
   return (num >> pos) & 1;
}

auto changeToB(int x, int k, bool b) -> int {
   return (b<<k) | (x & ~(1<<k));
}


auto solve (map<int, int> &ways, int posibility) -> int {

   int original = posibility;
   int total = 0;
   while(posibility != 0){
      if(ways[posibility] != 0){
         total += ways[posibility];
         posibility = 0;
         break;
      }
      int pos = __builtin_popcount(posibility);
      pos--;
      if(giveMeBit(posibility, pos) == 1)
         posibility = changeToB(posibility, pos, false);
      else
         posibility = changeToB(posibility, pos, true);
      total++;
   }
   ways[original] = total;

   return total;
}

auto main() -> int {_io

   int n, total = 0; 
   cin >> n;

   map<int, int> ways;

   int i;
   for(i = pow(2,n)-1; i >= 0 ; i--) {
      total += solve(ways, i);
   }
   cout << total << endl;
   return 0;

}