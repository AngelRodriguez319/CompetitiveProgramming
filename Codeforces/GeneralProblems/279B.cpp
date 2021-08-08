#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/279/B

auto solve(vector<int> books, int t) -> int {

   int right = 0, sum = 0, left = 0;
   int cont = 0, max = 0;

   for(right = 0; right < books.size(); right++){
      sum += books[right];
      if(sum <= t){
         cont++;
      }else{
         sum -= books[left];
         left++;
      }
      if(cont > max) max = cont;
   }
   return max  ;
}

auto main() -> int {

   int n, t;
   cin >> n >> t;
   vector<int> books(n, 0);
   
   for(auto &c : books)
      cin >> c;

   cout << solve(books, t) << endl;

   return 0;
}