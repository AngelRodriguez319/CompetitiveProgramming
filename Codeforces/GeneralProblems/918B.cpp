#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/918/B

auto main() -> int{

   int n, m;
   cin >> n >> m;
   map<string, string> names;


   while(n--){
      string name, ip;
      cin >> name >> ip;
      names.insert(pair<string, string>((ip+";"), name));
   }

   while(m--){
      string op, ip;
      cin >> op >> ip;
      cout << op << " " << ip << " #" << names[ip] << "\n";
   }

   return 0;
}