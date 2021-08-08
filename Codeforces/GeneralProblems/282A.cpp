#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 14 / 2021
// https://codeforces.com/problemset/problem/282/A

int main(){
   int n = 0, x = 0, i = 0;
   string statement = "";
   size_t foundPLUS, foundMINUS; 
   cin >> n;
   for(i = 0; i < n; i++){
      cin >> statement;
      foundPLUS = statement.find("++");
      foundMINUS = statement.find("--");
      if(foundPLUS != string::npos)
         x++;
      else if(foundMINUS != string::npos)
         x--;
   }     
   cout << x << endl;
   return 0;
}