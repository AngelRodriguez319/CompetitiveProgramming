#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/580/A

int main(){
   int n, aux = 1; 
   cin >> n; 
   vector<long> money(n), days;
   for(auto &x : money){
      cin >> x;
   }
   for(int i = 0; i < n; i++){
      if( (i+1) != n){
         if(money[i] <= money[i+1]){
            aux++;
         }else{
            days.push_back(aux);
            aux = 1;
         }
      }else{
         if(aux != 1){
            days.push_back(aux);
         }
         if(days.size() == 0){
            cout << n << endl;
            return 0;
         }else{
            days.push_back(1);
         }
      }
   }
   cout << *max_element(days.begin(), days.end()) << endl;
   return 0;
}