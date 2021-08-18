#include <bits/stdc++.h>
#define endl '\n'
#define lli long long int
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 11 / 2021

auto comp(const string &a, const string &b) -> bool {

   if(a.size() == b.size())
      return stoll(a) > stoll(b);

   if(a.size() != b.size()){
      if((int)a[0] == (int)b[0]){
         int index = std::min(a.size(), b.size());
         int i, j;
         for(i = 1, j = 1; i < index; i++, j++){
            if((int)a[i] > (int)b[j])
               return true;
         }
         if(a.size() < b.size())
            return true;
         return false;
      }else
         return (int)a[0] > (int)b[0];
   }

}

auto main() -> int { _io

   int n, i;
   cin >> n;

   vector <string> digits; 
   string number;

   for(i = 0; i < n; i++){
      cin >> number;
      sort(number.rbegin(), number.rend());
      digits.push_back(number);
   }

   sort(digits.begin(), digits.end(), comp);

   for(auto digit : digits)
      cout << digit;
   cout << endl;

   return 0;
}