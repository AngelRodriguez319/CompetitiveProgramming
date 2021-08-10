#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 08 / 2021
// https://codeforces.com/problemset/problem/272/A

auto sequence(int friends, int index) -> int {
   if(index == 0){
      return 1;
   }
   return sequence(friends, index-1) + (friends+1); 
}

auto binarySearch(int target, int friends) -> bool {

	int left = 0, right = target, mid;
	
	while(left <= right)
	{
		mid = left + (right - left)/2;
		
		if (sequence(friends, mid) == target)
		   return true;
		  
		if (target < sequence(friends, mid))
		   right = mid - 1;
		else
		   left = mid + 1;		  
	}
	
	return false;
}

auto main() -> int {

   int n, totalFingers = 0, aux, i, total = 0; 
   cin >> n;

   for(i = 0; i < n; i++){
      cin >> aux;
      totalFingers += aux;
   }

   for(i = totalFingers+1; i < totalFingers+6; i++)
      if(!binarySearch(i, n)) 
         total++;

   cout << total << endl;

   return 0;
}
