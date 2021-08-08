#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: May / 15 / 2021
// https://atcoder.jp/contests/abc198/tasks/abc198_b?lang=en

auto main() -> int{
 
   string numberAux;
   cin >> numberAux;
   
   int i = numberAux.size()-1;
   while(numberAux[i] == '0'){
      numberAux.pop_back();
      i--;
   }
 
   int size = numberAux.size()-1;
   for(int i = 0; i < size; i++){
      if(numberAux[i] != numberAux[size - i]){
         cout << "No\n";
         return 0;
      }
   }
 
   cout << "Yes\n";
   return 0;
}