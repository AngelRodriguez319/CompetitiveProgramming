#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 09 / 2021
// https://codeforces.com/problemset/problem/205/A

auto main() -> int {

   int n, min = INT_MAX;
   int aux, city = 0, i;
   cin >> n;

   map<int, int> cities;

   for(i = 1; i <= n; i++){
      cin >> aux;
      if(aux < min){
         min = aux;
         city = i;
      }
      cities[aux]++;
   }

   if(cities[min] == 1)
      cout << city << endl;
   else
      cout << "Still Rozdil" << endl;

}