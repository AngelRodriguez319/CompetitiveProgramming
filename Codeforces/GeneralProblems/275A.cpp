#include <iostream>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/275/A
 
int main(){
	int data[3][3], i, j;
	bool result[3][3];
	for(i = 0; i < 3; i++){
		cin >> data[i][0]; 
		cin >> data[i][1]; 
		cin >> data[i][2];
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			data[i][j] = (data[i][j] % 2);
			result[i][j] = true;
		}		
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(data[i][j] == 1){
				result[i][j] = !result[i][j];
				if((j+1) < 3)
					result[i][j+1] = !result[i][j+1];
				if((j-1) >= 0)
					result[i][j-1] = !result[i][j-1];
				if((i+1) < 3)
					result[i+1][j] = !result[i+1][j];
				if((i-1) >= 0)
					result[i-1][j] = !result[i-1][j];
				
			}
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cout << (result[i][j] ? "1" : "0");
		}
		cout << endl;
	}
	
	return 0;
}