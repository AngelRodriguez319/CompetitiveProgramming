#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/158/B

int main(){
   int n, aux = 0, i = 0, taxis = 0; 
   cin >> n;
   vector<int> friends;
   for(i = 0; i < n; i++){
      cin >> aux;
      if(aux != 4){
         friends.push_back(aux);
      }else{
         taxis++;
      }  
   }

   int one = 0, two = 0, three = 0;
   one = count(friends.begin(), friends.end(), 1);
   two = count(friends.begin(), friends.end(), 2);
   three = count(friends.begin(), friends.end(), 3);

   if(three >= one){
      taxis += three;
      two % 2 == 0 ? taxis += (two/2) : taxis += (two/2)+1;
   }else if(three < one){
      taxis += three;
      one -= three; 
      int ones_two = one/2;
      two += ones_two;
      if(one % 2 == 1){
         taxis += (two/2);
         taxis++;
      }else{
         two % 2 == 0 ? taxis += (two/2) : taxis += (two/2)+1;
      }
   }

   cout << taxis << endl;
   return 0;
}