#include <iostream>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/263/A

int main(){

	int in = 0, i, j, result = 0;

	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 5; j++){
			cin >> in;
			if(in == 1){
				result = abs(3-i) + abs(3-j);
			}
		}
	}
	cout << result << endl;
	return 0;
}
