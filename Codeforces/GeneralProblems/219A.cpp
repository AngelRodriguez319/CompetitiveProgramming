#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/219/A

auto main() -> int {

   int k; cin >> k;
   string s; cin >> s;

   if(k == 1){
      cout << s << endl;
      return 0;
   }

   map<char,int> howManyLetters;
   set<char> letters;

   for(auto letter : s){
      letters.insert(letter);
      howManyLetters[letter]++;
   }

   for(auto letter : letters){
      if(howManyLetters[letter] % k != 0){
         cout << "-1" << endl;
         return 0;
      }
   }

   string new_s = "";
   for(auto letter : letters){
      int size = howManyLetters[letter]/k;
      while(size--)
         new_s += letter;
   }

   string final = "";
   while(k--) 
      final += new_s;
   
   cout << final << endl;
   return 0;
}