#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 13 / 2021
// https://codeforces.com/problemset/problem/236/A

int main(){
   string name = "";
   int result = 0, i = 0, j = 0;
   cin >> name;
   vector<bool> letters(name.size(), true);
   for(i = 0; i < name.size(); i++){
      for(j = i+1; j < name.size(); j++){
         if(name[i] == name[j]){
            letters[i] = false;
         }
      }
   }
   for(i = 0; i < name.size(); i++)
      if(letters[i])
         result++;
   cout << (result % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
   return 0;
}