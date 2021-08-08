#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 22 / 2021
// https://www.hackerrank.com/challenges/queue-using-two-stacks/problem

int main(){

   queue<int> numbers;

   int q, option, val; 
   cin >> q;
   
   while(q--){
      cin >> option;
      if(option == 1){
         cin >> val;
         numbers.push(val);
      }else if(option == 2){
         numbers.pop();
      }else if(option == 3){
         cout << numbers.front() << endl;
      }
   }
   
   return 0;
}
