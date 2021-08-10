#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 08 / 2021
// https://codeforces.com/problemset/problem/227/B

auto main() -> int {

   int n, aux, m; 
   cin >> n;
   map <int, int> numbersPositions; 

   for(int i = 1; i <= n; i++) {
      cin >> aux;
      numbersPositions[aux] = i;
   }

   cin >> m;
   long long int vasya = 0, petya = 0;

   while(m--){
      cin >> aux;
       
      vasya += numbersPositions[aux];
      petya += n - numbersPositions[aux] + 1;

   }

   cout << vasya << " " << petya << endl;
   return 0;
}