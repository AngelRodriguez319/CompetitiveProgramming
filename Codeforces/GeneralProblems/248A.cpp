#include <iostream>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 12 / 2021
// https://codeforces.com/problemset/problem/248/A

int main(){
   int ones_left = 0, zeros_left = 0, ones_right = 0, zeros_right = 0;   
   int n = 0, i = 0, result = 0, provR, provL;
   cin >> n;
   for(i = 0; i < n; i++){
      cin >> provL >> provR;
      if(provL == 1)
         ones_left++;
      else if(provL == 0)
         zeros_left++;
      
      if(provR == 1)
         ones_right++;
      else if(provR == 0)
         zeros_right++;
   }
   
   if(ones_left >= zeros_left){
      result += zeros_left;
   }else if(zeros_left > ones_left){
      result += ones_left;
   }
 
   if(ones_right >= zeros_right){
      result += zeros_right;
   }else if(zeros_right > ones_right){
      result += ones_right;
   }

   cout << result << endl;
   return 0;
}