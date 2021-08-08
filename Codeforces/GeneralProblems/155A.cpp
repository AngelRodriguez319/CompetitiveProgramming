#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 13 / 2021
// https://codeforces.com/problemset/problem/155/A

int max(vector<int>& array, int left, int right){
   int max = 0;
   for(int i = left; i <= right; i++)
      if(array[i] > max)
         max = array[i];
   return max;
}

int min(vector<int>& array, int left, int right){
   int min = 10000;
   for(int i = left; i <= right; i++)
      if(array[i] < min)
         min = array[i];
   return min;
}

int count(vector<int>& array, int left, int right, int number){
   int result = 0;
   for(int i = left; i <= right; i++)
      if(array[i] == number)
         result++;
   return result;
}

int main(){
   int n = 0, i = 0, result = 0,max_value = 0, min_value = 0;
   cin >> n;
   vector<int> points(n, 0), prov;
   for(i = 0; i < n; i++)
      cin >> points[i];
   for(i = 1; i < n; i++){
      max_value = max(points, 0 , i);
      min_value = min(points, 0 , i);
      if(max_value == points[i] and count(points, 0, i, max_value) == 1)
         result++;
      else if(min_value == points[i] and count(points, 0, i, min_value) == 1)
         result++;
   }
   cout << result << endl;
   return 0;
}