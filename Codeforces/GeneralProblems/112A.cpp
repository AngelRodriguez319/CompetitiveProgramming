#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 14 / 2021
// https://codeforces.com/problemset/problem/112/A

int main(){
   string s1 = "", s2 = "";
   cin >> s1 >> s2;
   for_each(s1.begin(), s1.end(), [](char& c){
      c = tolower(c);
   });
   for_each(s2.begin(), s2.end(), [](char& c){
      c = tolower(c);
   });
   cout << (s1 == s2 ? "0" : lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end()) ? "-1" : "1") << endl;
   return 0;
}