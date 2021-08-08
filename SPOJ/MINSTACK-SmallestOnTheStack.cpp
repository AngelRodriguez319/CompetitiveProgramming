#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://www.spoj.com/problems/MINSTACK/en/

auto main() -> int {

   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int n, number; 
   cin >> n;
   string operation;

   stack<pair<int,int>> magicBag;


   while(n--){

      cin >> operation;
      
      if(operation == "PUSH"){
         cin >> number;
         if(magicBag.empty()){
            magicBag.push(make_pair(number, number));
         }else{
            magicBag.push(make_pair(number, min(magicBag.top().second, number)));
         }
      }else if(operation == "POP"){
         if(!magicBag.empty())
            magicBag.pop();
         else
            cout << "EMPTY" << "\n";

      }else if(operation == "MIN"){
         if(!magicBag.empty())
            cout << magicBag.top().second << "\n";
         else
            cout << "EMPTY" << "\n";
      }
   }

   return 0;
}