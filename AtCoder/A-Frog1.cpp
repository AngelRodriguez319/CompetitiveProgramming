#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: July / 26 / 2021
//https://atcoder.jp/contests/dp/tasks/dp_a

auto solve(int n, vector<int> &heights, int i, vector<int> &solutions) -> void {
	
	if(i+1 == n){
		cout << solutions[i] << endl;
		return;
	}
	
	if(i+1 < n)
		solutions[i+1] = min(abs(heights[i] - heights[i+1]) + solutions[i], solutions[i+1]);
	
	if(i+2 < n)
		solutions[i+2] = min(abs(heights[i] - heights[i+2]) + solutions[i], solutions[i+2]);
	
	solve(n, heights, i+1, solutions);
	
}
 
auto main() -> int {
	
	int n; cin >> n;
	vector<int> heights(n), solutions(n, INT_MAX);
	
	solutions[0] = 0;
	
	for(auto &height : heights)
		cin >> height;
	
	solve(n, heights, 0, solutions);
	
	return 0;
}