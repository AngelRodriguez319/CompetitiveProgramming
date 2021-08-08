#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 05 / 2021
// https://codeforces.com/problemset/problem/1520/B

int main(){
 
   int t; cin >> t;
   long long int n;
 
   while(t--){
      cin >> n;
      
      if(n <= 10){
         cout << (n == 10 ? 9 : n) << endl;
      }else if(n <= 100){
         cout << (n == 100 ? 18 : (9+(n/11))) << endl;
      }else if(n <= 1000){
         cout << (n == 1000 ? 27 : (18+(n/111))) << endl;
      }else if(n <= 10000){
         cout << (n == 10000 ? 36 : (27+(n/1111))) << endl;
      }else if(n <= 100000){
         cout << (n == 100000 ? 45 : (36+(n/11111))) << endl;
      }else if(n <= 1000000){
         cout << (n == 1000000 ? 54 : (45+(n/111111))) << endl;
      }else if(n <= 10000000){
         cout << (n == 10000000 ? 63 : (54+(n/1111111))) << endl;
      }else if(n <= 100000000){
         cout << (n == 100000000 ? 72 : (63+(n/11111111))) << endl;
      }else if(n <= 1000000000){
         cout << (n == 1000000000 ? 81 : (72+(n/111111111))) << endl;
      }
   }
 
   return 0;
}