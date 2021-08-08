#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 13 / 2021
// https://codeforces.com/problemset/problem/228/A

int main(){
   vector<int> colors, num_colors;
   int prov = 0, i = 0, max = 0, min = 0;
   for(i = 0; i < 4 ; i++){
      cin >> prov;
      colors.push_back(prov);
   }
   for(i = 0; i < 4; i++)
      num_colors.push_back(count(colors.begin(), colors.end(), colors[i]));
   max = *max_element(num_colors.begin(), num_colors.end());
   min = *min_element(num_colors.begin(), num_colors.end());
   if(max == 1)
      cout << 0 << endl;
   else if(max == min)
      cout << ((max == 4) ? 3 : max) << endl;
   else
      cout << max - 1 << endl;
   return 0;
}