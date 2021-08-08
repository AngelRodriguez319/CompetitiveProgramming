#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 06 / 2021
// https://codeforces.com/problemset/problem/855/A

int main(){
 
   int num_names; 
   cin >> num_names;
 
   auto names = set<string> {};
   auto name = string{};
 
   while(num_names--){
      cin >> name;
      if(names.count(name) == 1){
         cout << "YES" << endl;
      }else{
         cout << "NO" << endl;
         names.insert(name);
      }
   } 
 
   return 0;
}