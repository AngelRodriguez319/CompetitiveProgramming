#include <iostream>
#include <string>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/266/A
 
int main(){
	int n, i, remove = 0;
	cin >> n;
	string colors;
	cin >> colors;
	for(i = 0; i < n; i++){
		if(i < (n-1) && colors[i] == colors[i+1])
			remove++;
	}
	cout << remove << endl;
	return 0;
}
