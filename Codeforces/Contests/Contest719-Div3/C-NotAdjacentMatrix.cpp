#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: May / 05 / 2021
// https://codeforces.com/contest/1520/problem/C

int main(){
 
   int t; cin >> t;
 
   while(t--){
      int n; cin >> n;
      if(n == 1){
         cout << "1" << endl;
      }else if(n == 2){
         cout << "-1" << endl;
      }else if(n == 3){
         cout << "2 9 7 " << endl;
         cout << "4 6 3 " << endl;
         cout << "1 8 5 " << endl;
      }else{
 
         int left = n * n, right = 1;
         int counter = 1;
         vector<vector<int>> matrix;
         vector<int> aux;
 
         while(left != right){
            if(counter % 2 == 0){
               aux.push_back(right);
               right++;
            }else{
               aux.push_back(left);
               left--;
            }
            if(counter % n == 0){
               matrix.push_back(aux);
               aux.clear();
            }
            counter++;
         }
         matrix.push_back(aux);
         matrix.back().push_back(left);
 
         int auxInt = 0;
         for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
               if(i == (n-2) && j == (n-1)){
                  cout << left << " ";
                  auxInt = matrix[i][j];
               }else if(i == (n-1) && j == (n-1)){
                  cout << auxInt << " ";
               }else{
                  cout << matrix[i][j] << " ";
               }
            }
            cout << "\n";
         }
      }
   }
   cout << endl;
 
   return 0;
}