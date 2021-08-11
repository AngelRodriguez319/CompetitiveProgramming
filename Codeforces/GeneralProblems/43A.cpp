#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 10 / 2021
// https://codeforces.com/problemset/problem/43/A

auto main() -> int {

   int n; cin >> n;
   string team1, team2, aux;
   map<string, int> score;

   n--;
   cin >> team1;
   score[team1]++;

   while (n--){
      cin >> aux;
      if(aux != team1) team2 = aux;
      score[aux]++;
   }
   
   cout << (score[team1] > score[team2] ? team1 : team2) << endl;
   return 0;
}