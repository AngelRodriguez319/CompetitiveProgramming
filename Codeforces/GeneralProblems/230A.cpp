#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 13 / 2021
// https://codeforces.com/problemset/problem/230/A

auto comp(const pair<int, int> &a, const pair<int, int> &b) -> bool {

   if(a.first != b.first)
      return a.first > b.first;

   if(a.first == b.first)
      return a.second > b.second;

}

auto main() -> int { _io

   int s, n, aux, aux2;
   cin >> s >> n;
   vector<pair<int,int>> dragons;
   
   while(n--){
      cin >> aux >> aux2;
      dragons.push_back(make_pair(aux, aux2));
   }

   sort(dragons.rbegin(), dragons.rend(), comp);

   for(auto dragon : dragons){
      if(s > dragon.first){
         s += dragon.second;
      }else{
         cout << "NO" << endl;
         return 0;
      }
   }

   cout << "YES" << endl;
   return 0;
}