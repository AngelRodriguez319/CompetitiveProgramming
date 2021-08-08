#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 12 / 2021
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3139

string solve (string& line){
	auto elements = list<char> {};
	auto it = elements.begin();

	for(const auto c : line){
		if(c == '[')
			it = begin(elements);
		else if(c == ']')
			it = end(elements);
		else
			it = ++elements.insert(it, c);

	}
	auto result = string {};
	for(const auto c: elements)
		result += c;

	return result;

}

int main(){

	string line;
	while(getline(cin, line)){
		cout << solve(line) << endl;
	}

	return 0;
}