#include <iostream>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 100 / 2021
// https://codeforces.com/problemset/problem/200/B

int main(){
	int prov = 0, n, i;
	float sum = 0;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> prov;
		sum += prov;
	}
	cout << sum/n << endl;
	return 0;
}