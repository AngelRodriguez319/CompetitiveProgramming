#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/320/A

auto main () -> int {

   string n; cin >> n;

   int i = 0;
   bool hasOneLeft = false;
   int countFours = 0;

   while(i < n.size()){
      if(n[i] == '1'){
         hasOneLeft = true;
         countFours = 0;
      }else if(n[i] == '4' && hasOneLeft){
         countFours++;
         if(countFours > 2){
            cout << "NO" << endl;
            return 0;
         }
      }else{
         cout << "NO" << endl;
         return 0;
      }
      i++;
   }
   cout << "YES" << endl;
   return 0;
}