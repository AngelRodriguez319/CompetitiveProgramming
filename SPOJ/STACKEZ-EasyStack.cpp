#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://www.spoj.com/problems/STACKEZ/en/

int main(){
  int t; 
  scanf("%d", &t);
  stack<int> s;
  while(t--){
      int x; scanf("%d", &x);
      if(x == 1){
          scanf("%d", &x);
          s.push(x);
      }
      else if(x == 2){
          if(!s.empty())
            s.pop();
      }
      else{
          if(s.empty()) 
            printf("Empty!\n");
          else 
            printf("%d\n", s.top());
      }
  }
  return 0; 
}