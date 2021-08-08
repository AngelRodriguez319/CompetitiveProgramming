#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 13 / 2021
// https://codeforces.com/problemset/problem/339/A

int main(){
   string sum = "";
   cin >> sum;
   int i = 0;
   vector<int> numbers;
   for(i = 1; i <= sum.size(); i++)
      if(i % 2 == 1)
         numbers.push_back(sum[i - 1] - '0');
   sort(numbers.begin(), numbers.end());
   for(i = 0; i < numbers.size(); i++)
      cout << numbers[i] << ((i+1 == numbers.size()) ? "\n" : "+");
   return 0;
}