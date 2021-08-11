#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/352/A
 
auto main() -> int {

   int n, aux, i; 
   cin >> n;
   map<int,int> numbers;

   while(n--){
      cin >> aux;
      numbers[aux]++;
   } 

   if(numbers[5] / 9 >= 1 && numbers[0] > 0){

      for(i = 0; i < numbers[5] / 9; i++)
         cout << "555555555";

      for(i = 0; i < numbers[0]; i++)
         cout << "0";
      
      cout << endl;

   }else if(numbers[0] > 0){
      cout << "0" << endl;
   }else{
      cout << "-1" << endl;
   }

   return 0;
}
