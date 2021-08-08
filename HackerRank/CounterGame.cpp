#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 15 / 2021
// https://www.hackerrank.com/challenges/counter-game/problem

auto solve(long long int &n) -> void {

   int who = 0;
   if(n == 1){ 
      cout << "Richard\n";
      return;
   }

   while(n != 1){
      who++;
      long long int potency = log2(n);
      if(pow(2,potency) == n) n /= 2;
      else n -= pow(2, potency);
   }

   cout << (who%2 == 0 ? "Richard\n" : "Louise\n"); 

}

auto main() -> int {

   int t;
   long long int n;
   cin >> t;

   while(t--){
      cin >> n;
      solve(n);
   }

   return 0;
}
