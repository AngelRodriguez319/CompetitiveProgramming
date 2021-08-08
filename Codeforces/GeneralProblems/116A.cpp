#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 13 / 2021
// https://codeforces.com/problemset/problem/116/A

int main(){
   int n = 0, i = 0, exit = 0, enter = 0, remain = 0;
   cin >> n;
   vector<int> sum(n, 0);
   for(i = 0; i < n; i++){
      cin >> exit >> enter;
      remain = remain - exit + enter;
      sum.push_back(remain);
   }
   cout << *max_element(sum.begin(), sum.end()) << endl;
   return 0;
}