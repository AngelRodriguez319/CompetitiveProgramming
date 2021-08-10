#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 09 / 2021
// https://codeforces.com/problemset/problem/165/A

struct Coords{   
   
   int x, y;
   bool left, right, upper, lower;
      
   Coords(int a, int b){
      x = a;
      y = b;
      left = false;
      right = false;
      upper = false;
      lower = false;
   }

   bool isSupercentralPoint(){
      return left && right && upper && lower; 
   }

   bool operator !=(const Coords& lhs){
      return !(x == lhs.x && y == lhs.y);
   } 
};

auto main() -> int {

   int n, x, y, total = 0;
   cin >> n;

   vector <Coords *> points;

   for(int i = 0; i < n; i++) {
      cin >> x >> y;
      points.push_back(new Coords(x,y));
   }

   for(auto pointA : points){
      for(auto pointB : points){
         if(pointA != pointB){
            if(pointA->x == pointB->x)
               (pointA->y > pointB->y) ? pointA->lower = true : pointA->upper = true;
            else if(pointA->y == pointB->y)
               (pointA->x > pointB->x) ? pointA->left = true : pointA->right = true;
         }
      }
   }

   for(auto point : points){
      if(point->isSupercentralPoint())
         total++;
   }

   cout << total << endl;
   return 0;
}
