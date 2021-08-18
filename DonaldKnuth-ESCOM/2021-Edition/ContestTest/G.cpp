#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 12 / 2021

auto dayToNumber(string day) -> int {
   if(day == "Monday")
      return 0;
   else if(day == "Tuesday")
      return 1;
   else if(day == "Wednesday")
      return 2;
   else if(day == "Thursday")
      return 3;      
   else if(day == "Friday")
      return 4;      
   else if(day == "Saturday")
      return 5;      
   else
      return 6;
}

auto main() -> int { _io

   int n, x, i, j, aux, total = 0;
   string day; 
   cin >> n >> day >> x;

   vector<int> aqi;
   j = dayToNumber(day);

   for(i = 0; i < n; i++, j++){
      if(j == 7) j = 0;
      cin >> aux;
      if(j != 5 && j != 6)
         aqi.push_back(aux);
   }

   for(int aqiPerDay : aqi){
      if(aqiPerDay >= x)
         total++;
   }

   cout << total << endl;
   return 0;
}