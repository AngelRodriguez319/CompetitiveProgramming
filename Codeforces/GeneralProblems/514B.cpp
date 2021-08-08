#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/contest/514/problem/B

struct point {
  double x, y;
};
 
auto main() -> int {
  
   int n, x_0, y_0;
   cin >> n >> x_0 >> y_0;
 
   vector<point> apples (n);
   for (auto &apple : apples)
      cin >> apple.x >> apple.y;
  
   for (auto &apple : apples) {
      apple.x -= x_0;
      apple.y -= y_0;
   }
 
   set<double> slopes;
   bool has_slopes_inf = false;
   
   for (auto &apple : apples) {
      if (apple.x != 0) 
         slopes.insert(apple.y / apple.x);
      else
         has_slopes_inf = true;
   }
 
   if (has_slopes_inf)
      cout << slopes.size() + 1 << endl;
   else
      cout << slopes.size() << endl;
 
   return 0;
}