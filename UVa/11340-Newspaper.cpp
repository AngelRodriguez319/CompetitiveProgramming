#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 04 / 2021
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2315

double findLetter(char c, vector<pair<char, double>> &input){
   for(auto x : input){
      if(x.first == c){
         return x.second;
      }
   }
   return 0;
}

int main(){

   int N, K, M, i = 0, j = 0;
   cin >> N;

   while (N--){

      cin >> K;
      
      char c;
      double val, total = 0;
      vector<pair<char, double>> input;

      for (i = 0; i < K; i++){
         cin >> c >> val;
         input.push_back(make_pair(c, val));
      }

      cin >> M;
      for (i = 0; i <= M; i++){
         string line;
         getline(cin, line);
         for (j = 0; j < line.size(); j++)
            total += findLetter(line[j], input);
      }
      cout << fixed << setprecision(2) << total / 100 << "$" << endl;
   }

   return 0;
}

