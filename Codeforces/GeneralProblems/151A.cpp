#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 13 / 2021
// https://codeforces.com/problemset/problem/151/A

int main(){

   int n = 0, k = 0, l = 0, c = 0, d = 0, p = 0, nl = 0, np = 0;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   vector<int>metrics;
   metrics.push_back(k*l/nl);
   metrics.push_back(c*d);
   metrics.push_back(p/np);   
   cout << (*min_element(metrics.begin(), metrics.end())) / n << endl;
   return 0;

}