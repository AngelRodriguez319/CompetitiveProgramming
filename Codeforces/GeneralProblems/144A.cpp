#include <iostream>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 10 / 2021
// https://codeforces.com/problemset/problem/144/A

int findMaxMin(int array[], int c, bool max){
	int i, r = array[0];
	for(i = 0; i < c; i++){
		if(max){
			if(r < array[i])
				r = array[i];
		}else{
			if(r > array[i])
				r = array[i];
		}
	}
	return r;
}
 
int main(){
	int n, i, index_max = 0, index_min = 0, max, min;
	cin >> n;
	int height[n];
	for(i = 0; i < n; i++)
		cin >> height[i];
	max = findMaxMin(height, n, true);
	min = findMaxMin(height, n, false);
	for(i = 0; i < n; i++){
		if(height[i] == max){
			index_max = i + 1;
			break;
		}
	}
	for(i = 0; i < n; i++){
		if(height[n-i-1] == min){
			index_min = n - i;
			break;
		}
	}
	cout << ( index_max < index_min ? (abs(1-index_max) + abs(n-index_min)) : (abs(1-index_max) + abs(n-index_min) - 1 )) << endl;
	return 0;
}
