#include <iostream>
#include <string>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/32/B

int main(){
	string borze, result;
	cin >> borze;
	int i = 0;
	while(i < borze.size()){
		if(borze[i] == '.'){
			result += "0";
			i++;
		}else if(borze[i] == '-'){
			(borze[i + 1] == '.') ? result += "1" : result += "2";
			i += 2; 
		}
	}
	cout << result << endl;
	return 0;
}