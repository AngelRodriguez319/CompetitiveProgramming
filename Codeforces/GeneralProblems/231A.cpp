#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 14 / 2021
// https://codeforces.com/problemset/problem/231/A
 
int main(){
   int n = 0, p = 0, v = 0, t = 0, i = 0, result = 0;
   cin >> n;
   for(i = 0; i < n; i++){
      cin >> p >> v >> t;
      if(p+v+t > 1)
         result++;
   }
   cout << result << endl;
   return 0;
}