#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 08 / 2021
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2493

int main(){

   int K = 1, i = 0, x = 0, y = 0; 
   pair<int, int> divisionPoint;
   vector<string> results;
   
   while(K != 0){
      cin >> K;
      cin >> divisionPoint.first >> divisionPoint.second;
      for(i = 0; i < K ; i++){
         cin >> x >> y;
         if(x == divisionPoint.first || y == divisionPoint.second){
            results.push_back("divisa");
         }else{
            if(x < divisionPoint.first){
               if(y > divisionPoint.second){
                  results.push_back("NO");
               }else{
                  results.push_back("SO");
               }
            }else{
               if(y > divisionPoint.second){
                  results.push_back("NE");
               }else{
                  results.push_back("SE");
               }
            }
         }
      }
   }
   for(auto x : results)
      cout << x << "\n";

   return 0;
}