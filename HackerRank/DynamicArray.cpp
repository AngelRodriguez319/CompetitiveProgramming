#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 25 / 2021
// https://www.hackerrank.com/challenges/dynamic-array/problem

int main(){
   int n = 0, q = 0, x = 0, y = 0, qType = 0, lastAnswer = 0;
   cin >> n >> q;
   vector<vector<int>> arr (n);
   for(int i = 0; i < q; i++){
      cin >> qType >> x >> y;
      if(qType == 1){
         arr[(x^lastAnswer)%n].push_back(y);
      }else{
         int aux1 = arr[(x^lastAnswer)%n].size();
         lastAnswer = arr[(x^lastAnswer)%n][y % aux1];
         cout << lastAnswer << endl;
      }
   }   
   return 0;
}