#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 13 / 2021
// https://codeforces.com/problemset/problem/71/A

int main(){
   int n = 0, i = 0;
   cin >> n;
   string prov = "";
   vector<string> words;
   for(i = 0; i < n; i++){
      cin >> prov;
      (prov.size() > 10) ? words.push_back(prov[0] + to_string(prov.size() - 2) + prov[prov.size() - 1]) : words.push_back(prov) ;  
   } 
   for(i = 0; i < n; i++)
      cout << words[i] << endl;
   return 0;
}