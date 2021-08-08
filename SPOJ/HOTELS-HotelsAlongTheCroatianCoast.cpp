#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://www.spoj.com/problems/HOTELS/en/

auto main() -> int {
   
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
  
   int n, cash; 
   cin >> n >> cash;
   vector<int> hotels;
   
   while(n--) {
      int value; cin >> value;
      hotels.push_back(value);
   }
  
   if (hotels.size() < 2) {
      if (hotels[0] <= cash) {
         cout << hotels[0] << "\n";
         return 0;
      }
   }
  
   int i1 = 0;
   int i2 = 1;
   int max = (hotels[0] <= cash)? hotels[0] : 0;
   int total = (hotels[0] <= cash)? hotels[0] : 0;
  
   if (total == cash) {
      cout << total << "\n";
      return 0;
   }
   while(i2 < hotels.size() && i1 <= i2) {
      int plusLast = total + hotels[i2];
      if(plusLast == cash) {
         cout << cash << "\n";
         return 0;
      }
      if (plusLast > cash) {
         total -= hotels[i1];
         i1++;
      } else if (plusLast < cash) {
         total = plusLast;
         max = std::max({total, max});
         i2++;
      } else if (i1 == i2) {
         i2++;
      }
   }
   cout << max << "\n";
   return 0;
}