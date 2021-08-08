#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 04 / 2021
// https://codeforces.com/problemset/problem/686/A

int main(){
 
   int n, i = 0;
   long long int x, aux = 0, no = 0; 
   char opp;
   cin >> n >> x;
   
   for(i = 0; i < n; i++){
      cin >> opp >> aux;
      if(opp == '+'){
         x += aux;
      }else if(opp == '-'){
         if((x - aux) >= 0){
            x -= aux;
         }else{
            no++;
         }
      }
   }
   cout << x << " " << no << "\n"; 
 
   return 0;
}