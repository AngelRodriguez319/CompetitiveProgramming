#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 13 / 2021
// https://codeforces.com/problemset/problem/133/A

int main(){
   string word;
   cin >> word;
   size_t find_H = word.find("H");
   size_t find_Q = word.find("Q");
   size_t find_9 = word.find("9");
   if(find_H != string::npos || find_Q != string::npos || find_9 != string::npos)
      cout << "YES" << endl;
   else
      cout << "NO" << endl;
   return 0;
}
