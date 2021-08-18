#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 11 / 2021

auto main() -> int { _io

   string word;
   cin >> word;

   map<char,int> replaceLetters;
   replaceLetters['I'] = 1;
   replaceLetters['Z'] = 2;
   replaceLetters['E'] = 3;
   replaceLetters['A'] = 4;
   replaceLetters['S'] = 5;
   replaceLetters['G'] = 6;
   replaceLetters['T'] = 7;
   replaceLetters['B'] = 8;

   char letterUpper;
   for(auto letter : word){
      letterUpper = toupper(letter);

      if(replaceLetters[letterUpper] != 0)
         cout << replaceLetters[letterUpper];
      else if(letter == 'O' or letter == 'o')
         cout << "0";
      else
         cout << letter;
   }

   cout << endl;
   return 0;
}