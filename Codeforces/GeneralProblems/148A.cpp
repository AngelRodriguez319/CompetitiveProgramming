#include <bits/stdc++.h>
using namespace std;
 
// Author: Angel Gabriel Rodriguez
// Date: March / 11 / 2021
// https://codeforces.com/problemset/problem/148/A

int main(){
	int k, l, m, n, d, i, cont = 0;
	cin >> k >> l >> m >> n >> d;
	if(k == 1 || l == 1 || m == 1 || n == 1){
		cout << d << endl;
	}else{
		bool dragons[d];
		memset(dragons, true, sizeof(dragons));
		for(i = 1; i <= d; i++){
			if( i % k == 0)
				if(dragons[i-1])
					dragons[i - 1] = false;
			if( i % l == 0)
				if(dragons[i-1])
               dragons[i - 1] = false;
			if( i % m == 0)
				if(dragons[i-1])
               dragons[i - 1] = false;
			if( i % n == 0)
				if(dragons[i-1])
               dragons[i - 1] = false;
		}
		for(i = 0; i < d; i++)
			if(!dragons[i])
				cont++;
		cout << cont << endl;
	}
	return 0;
}