#include <iostream>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/69/A

int main(){
	int n, i, j, aux = 0;
	bool result = true;
	cin >> n;
	int matriz[n][3];
	for(i = 0; i < n; i++){
		cin >> matriz[i][0];
		cin >> matriz[i][1];
		cin >> matriz[i][2];
	}
	for(j = 0; j < 3; j++){
		for(i = 0; i < n; i++){
			aux += matriz[i][j];
		}
		if(aux != 0){
			result = false;
			break;
		}
	}
	cout << (result ? "YES" : "NO") << endl;
	return 0;
}
