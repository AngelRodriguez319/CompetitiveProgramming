#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/903/C

auto main() -> int {
   
   int n;cin >> n;
 
   auto boxes = vector<int>(n);
   for (auto& box : boxes)
      cin >> box;
 
   map<int, int> countBoxes;
   for (const auto box : boxes)
      ++countBoxes[box];
 
   priority_queue<int> p;
   for (auto [box, f] : countBoxes) 
      p.push(box);
 
   while (p.size() > 1) {
      auto max = p.top();
      p.pop();
      auto max2 = p.top();
      p.pop();
 
      auto num_new_boxes = std::max(countBoxes[max], countBoxes[max2]);
      p.push(max);
      countBoxes[max] = num_new_boxes;
   }
 
   cout << countBoxes[p.top()] << endl;
 
   return 0;
}