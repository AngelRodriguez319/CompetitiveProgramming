#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 09 / 2021
// https://codeforces.com/problemset/problem/224/A

auto main () -> int {

   int x, y, z;
   cin >> x >> y >> z;

   int a, b, c;

   a = sqrt((x*y)/z);
   b = sqrt((x*z)/y);
   c = sqrt((z*y)/x);

   cout << 4*(a + b + c) << endl;
   return 0;
}