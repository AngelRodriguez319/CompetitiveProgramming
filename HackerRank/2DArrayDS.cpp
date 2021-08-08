#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 25 / 2021
// https://www.hackerrank.com/challenges/2d-array/problem

int main(){
   int i = 0, j = 0, aux = 0;
   vector<vector<int>> array(6);
   vector<int> sum;
   for(auto &x : array){
      for(i = 0; i < 6; i++){
         cin >> aux ;
         x.push_back(aux);
      }
   }
   for(i = 0; i < 4; i++)
      for(j = 0; j < 4; j++)
         sum.push_back(array[i][j] + array[i][j+1] + array[i][j+2] + array[i+1][j+1] + array[i+2][j] + array[i+2][j+1] + array[i+2][j+2]);
   
   cout << *max_element(sum.begin(), sum.end()) << "\n";
   return 0;
}