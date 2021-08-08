#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 25 / 2021
// https://www.hackerrank.com/challenges/arrays-ds/problem

int main(){
   int n = 0, i = 0, aux = 0;
   cin >> n;
   vector<int> array(n);
   for(auto &x : array)
      cin >> x;
   for(i = n - 1; i >= 0; i--)
      cout << array[i] << " ";
   std::cout << "\n";
   return 0;
}