#include <iostream>
#include <string>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/110/A

int main(){
	int i, lucky_numbers = 0;
	string number;
	cin >> number;
	for(i = 0; i < number.size(); i++){
		if(number[i] == '4' || number[i] == '7')
			lucky_numbers++;
	}
	cout << ((lucky_numbers == 7 || lucky_numbers == 4) ? "YES" : "NO") << endl;
	return 0;
}