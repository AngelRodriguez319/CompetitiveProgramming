#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 26 / 2021
// https://codeforces.com/problemset/problem/435/A

int main(){
 
   queue<int> students;
   int n, m, i, aux, bus = 0;
   cin >> n >> m;
 
   for(i = 0; i < n; i++){
      cin >> aux;
      students.push(aux);
   }
 
   while(!students.empty()){
 
      if(students.front() == m){
         students.pop();
         bus++;
      }else{
         int sum = 0;
         sum = students.front();
         while(sum <= m){
            if(students.empty()){
               break;
            }
            students.pop();
            sum += students.front();
         }
         bus++;
      }
   }
 
   cout << bus << endl;
   return 0;
}