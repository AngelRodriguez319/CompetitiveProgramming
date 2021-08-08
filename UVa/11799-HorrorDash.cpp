#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 13 / 2021
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2899

int main(){

   int t, i, N, j, max = 0, aux;
   cin >> t;
   
   for(i = 0; i < t; i++){
      cin >> N;
      for(j = 0; j < N; j++){
         cin >> aux;
         if(aux > max) max = aux;
      }
      cout << "Case " << (i+1) << ": " << max << endl; 
      max = 0;
   }

   return 0;
}
