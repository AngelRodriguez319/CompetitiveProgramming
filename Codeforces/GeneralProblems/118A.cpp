#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 13 / 2021
// https://codeforces.com/problemset/problem/118/A

auto main() -> int { _io
   
   map<char, bool> isVowels;
   string vowels = "AEIOUYayeiou", word;
   for(auto vowel : vowels)
      isVowels[vowel] = true;

   cin >> word;
   for(auto character : word)
      if(!isVowels[character])
         cout << "." << (char)tolower(character);

   cout << endl;
   return 0;
}