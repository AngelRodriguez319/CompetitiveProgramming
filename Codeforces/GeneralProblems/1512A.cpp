#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/1512/A

int main() {
    
   int t, sizeArray;
   cin >> t;
    
   for(int i = 0; i < t; i++){
      cin >> sizeArray;
      vector<int> numbers (sizeArray);
      int count1 =0;
      int count2 =0;
      int position2=10;
      
      for(int i=0; i<sizeArray; i++){
         cin >> numbers[i];
         int number1 = numbers[0];
            
         if(numbers[i]!=number1){
            int number2 = numbers[i];
            position2 =i+1;
         }
            
         if(numbers[i] == number1){
            count1++;
         }else{
            count2++;
         }
      }
        
      if(count1>count2){
         cout<<position2<<endl;
      }else{
         cout<<1<<endl;
      }
   }
	   
	return 0;
}