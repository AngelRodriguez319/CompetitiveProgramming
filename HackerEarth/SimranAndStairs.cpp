#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: June / 07 / 2021
// https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/simran-and-stairs/description/

auto climbStairs(int n, vector<int> &bucket, int sum) -> int {

   if(sum == n) return 1;
   else if (sum > n) return 0;
   
   if(bucket[sum] != -1) return bucket[sum];
   
   bucket[sum] = climbStairs(n, bucket, sum+1) + 
         climbStairs(n, bucket, sum+2) + 
         climbStairs(n, bucket, sum+3);
   return bucket[sum];

}

auto main() -> int {

   int n; 
   cin >> n;
    
   vector<int> bucket (32, -1);
   cout << climbStairs(n, bucket, 0) << "\n";
    
   return 0;

}