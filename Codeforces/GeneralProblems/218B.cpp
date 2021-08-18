#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 18 / 2021
// https://codeforces.com/problemset/problem/218/B

auto main() -> int { _io

   int n, m, i = 0, min = 0, max = 0;
   cin >> n >> m;
   vector<int> seats(m);

   for(auto &seat : seats)
      cin >> seat;

   sort(seats.begin(), seats.end());

   int nMax = n;
   while(n > 0){
      if(n >= seats[i]){
         min += (seats[i]*(seats[i]+1))/2;
         n -= seats[i];
      }else{
         min += ((seats[i]+seats[i]-n+1)*(n))/2;
         n = 0;
      }
      i++;
   }

   if(nMax == accumulate(seats.begin(), seats.end(), 0)){
      max = min;
   }else{

      reverse(seats.begin(), seats.end());
      while(nMax--){
         max += seats[0];
         seats[0]--;

         for(i = 1; i < m; i++){
            if(seats[i] <= seats[i-1])
               break;
            swap(seats[i], seats[i-1]);
         }
      }
   }
   
   cout << max << " " << min << endl;
   return 0;
}