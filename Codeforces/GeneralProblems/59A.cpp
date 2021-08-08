#include <iostream>
#include <string>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/59/A
 
int main(){
	string word;
	cin >> word;
	int upper = 0, lower = 0, i;
	for(i = 0; i < word.size(); i++)
		isupper(word[i]) ? upper++ : lower++;
	if(lower >= upper)
		for(i = 0; i < word.size(); i++)
			word[i] = tolower(word[i]);
	else
		for(i = 0; i < word.size(); i++)
			word[i] = toupper(word[i]);
	cout << word << endl;
	return 0;
}