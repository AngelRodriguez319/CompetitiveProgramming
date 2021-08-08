#include <iostream>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/266/B

int main(){
	int n, time = 0, i, j, aux = 0;
	char auxChar;
	cin >> n;
	cin >> time;
	int matriz[n];
	for(i = 0; i < n; i++){
		cin >> auxChar;
		(auxChar == 'B') ? matriz[i] = 1 : matriz[i] = 0;
	}
	for(i = 0; i < time; i++){
		aux = 0;
		while(aux < n){
			if(matriz[aux] == 1){ 
				if(matriz[aux + 1] == 0){
					matriz[aux] = 0;
					matriz[aux + 1] = 1;
				}else{
					aux--;
				}
			}else{
				aux--;
			}
			aux += 2;
		}
	}
	for(i = 0; i < n; i++){
		cout << (matriz[i] == 1 ? "B" : "G");
	}
	cout << endl;
	return 0;
}
