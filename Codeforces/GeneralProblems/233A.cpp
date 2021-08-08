#include <iostream>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/233/A
 
int main(){
	int n = 0, i;
	cin >> n;
	int result[n];
	if(n % 2 == 0){
		for(i = 1; i <= n; i++)
			(i % 2 == 0) ? result[i-2] = i : result[i] = i;
		for(i = 0; i < n; i++)
			cout << result[i] << " ";
		cout << endl;
	}else
		cout << "-1" << endl;
	return 0;
}