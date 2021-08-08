#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 26 / 2021
// https://codeforces.com/problemset/problem/450/A

int main(){
 
   pair<int, int> auxiliar;
   queue<pair<int, int>> childs;
 
   int n , m, aux, i; 
   cin >> n >> m;
 
   for(i = 1; i <= n; i++){
      cin >> aux;
      childs.push(make_pair(aux, i));     
   }
 
   while(!childs.empty()){
      if(childs.size() == 1){
         cout << childs.front().second << endl;
         return 0;
      }
      if(childs.front().first <= m ){
         childs.pop();
      }else{
         childs.front().first -= m;
         auxiliar = childs.front();
         childs.pop();
         childs.push(auxiliar);
      }
   }
   
   return 0;
}