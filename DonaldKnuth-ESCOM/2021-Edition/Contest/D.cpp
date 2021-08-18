#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 13 / 2021

auto solve (int n, vector<pair<int, int>> photos, vector<pair<int, int>> friends) -> void {

   bool isYes = false;
   for(auto pairFriend : friends){
      isYes = false;
      if(pairFriend.first > pairFriend.second){
         int aux = pairFriend.first; 
         pairFriend.first = pairFriend.second;
         pairFriend.second = aux;
      }
      for(auto photo : photos){
         if(photo.first <= pairFriend.first && photo.second >= pairFriend.second){
            cout << "Yes" << endl;
            isYes = true;
            break;
         }
      }
      if(!isYes)
         cout << "No" << endl;
   }

}


auto main() -> int { _io

   int n, m, q, aux, aux2;
   cin >> n >> m >> q;

   map<int, vector<int>> photos;
   vector<pair<int, int>> friends;

   int i = 1;
   while(m--){
      cin >> aux >> aux2;
      map[i]
      photos.push_back(make_pair(aux, aux2));
   }

   while(q--){
      cin >> aux >> aux2;
      friends.push_back(make_pair(aux, aux2));
   }

   solve(n, photos, friends);

   return 0;
}