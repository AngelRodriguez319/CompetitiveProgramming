#include <string>
#include <iostream>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/271/A
 
bool isDistint(int lastYear){
	string year = to_string(lastYear);
	if(year[0] == year[1] || year[0] == year[2] || year[0] == year[3]){
		return false;
	}else if(year[1] == year[2] || year[1] == year[3]){
		return false;
	}else if(year[2] == year[3]){
		return false;
	}else{
		return true;
	}
	return false;
}
 
int main(){
 
	int lastYear = 0;
	cin >> lastYear;
	lastYear++;
	while(!isDistint(lastYear)){
		lastYear++;
	}
	cout << lastYear << endl;
	return 0;
}