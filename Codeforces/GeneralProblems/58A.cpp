#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 26 / 2021
// https://codeforces.com/problemset/problem/58/A

int main(){
 
   queue<char> letters;
   string word;
   cin >> word;
 
   letters.push('h');
   letters.push('e');
   letters.push('l');
   letters.push('l');
   letters.push('o');
 
   for(int i = 0; i < word.size(); i++){
      if(word[i] == letters.front())
         letters.pop();
   }
   cout << (letters.empty() ? "YES" : "NO") << endl;
   return 0;
}