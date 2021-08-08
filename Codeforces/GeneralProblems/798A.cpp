#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/798/A

auto main() -> int{

   string palindrome;
   cin >> palindrome;
   
   int cont = 0;
   int size = palindrome.size();
   
   for(int i = 0; i < (size/2); i++){
      if(palindrome[i] != palindrome[size-(i+1)])
         cont++;
   }
   
   if(cont == 0){
      if(size % 2 == 0){
         cout << "NO\n";
      }else{
         cout << "YES\n";
      }
   }else if(cont == 1){
      cout << "YES\n";
   }else{
      cout << "NO\n";
   }

   return 0;
}