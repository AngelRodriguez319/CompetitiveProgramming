#include <iostream>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 09 / 2021
// https://codeforces.com/problemset/problem/80/A
 
bool isPrime(int m){
	int x = 1, cont = 0;
	bool is_prime;
	while(x <= m){
		(m % x == 0) ? cont++ : true;
		x++;
	}
	cont == 2 ? is_prime = true : is_prime = false;
	return is_prime;
}
 
int main(){
	int n, m;
	cin >> n;
	cin >> m;
	n++;
	while(!isPrime(n))
		n++;
	cout << (n == m ? "YES" : "NO") << endl;
	return 0;
}