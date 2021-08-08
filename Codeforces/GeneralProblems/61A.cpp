#include <iostream>
#include <string>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/61/A

int main(){
	string lineOne, lineTwo, result;
	cin >> lineOne;
	cin >> lineTwo;
	for(int i = 0; i < lineOne.size(); i++)
		(lineOne[i] == lineTwo[i]) ? result += "0" : result += "1";
	cout << result << endl;
	return 0;
}