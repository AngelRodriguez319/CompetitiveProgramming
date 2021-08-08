#include <iostream>
#include <string>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/281/A

int main(){
	string word;
	cin >> word;
	word[0] = toupper(word[0]);
	cout << word << endl;
	return 0;
}