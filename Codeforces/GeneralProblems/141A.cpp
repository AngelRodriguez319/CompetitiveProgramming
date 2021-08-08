#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 14 / 2021
// https://codeforces.com/problemset/problem/141/A

int main(){
   int i = 0, cnt_P = 0, cnt_H = 0, cnt_G = 0;
   bool result = true;
   string host = "", guest = "", pile = "";
   
   cin >> host >> guest >> pile;
   vector<char> letter;
   vector<char>::iterator it;
   
   if(host.size() + guest.size() != pile.size()){
      result = false;
   }else{
      for(i = 0; i < host.size(); i++){
         it = find(letter.begin(), letter.end(), host[i]); 
         if(it == letter.end())
            letter.push_back(host[i]);
      }
      for(i = 0; i < guest.size(); i++){
         it = find(letter.begin(), letter.end(), guest[i]); 
         if(it == letter.end())
            letter.push_back(guest[i]);
      }
      for(i = 0; i < letter.size(); i++){
         cnt_P = count(pile.begin(), pile.end(), letter[i]);
         cnt_H = count(host.begin(), host.end(), letter[i]);
         cnt_G = count(guest.begin(), guest.end(), letter[i]);
         if((cnt_H + cnt_G) != cnt_P){
            result = false;
            break;
         }
      }
   }
   cout << (result ? "YES" : "NO") << endl;
   return 0;
   
}