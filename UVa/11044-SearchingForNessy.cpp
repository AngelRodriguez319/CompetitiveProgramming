#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1985

auto main() -> int {

   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
    
	int query;
	cin>>query;

	int l=0, a=0, l1=1, l2=1;
	int c=3, q=3, ans=0;
	
   for(int i=0; i<query; i++){

	   int n, m;
		cin>>n>>m;
		
      l= n-2;
		a = m-2;
		
      while(c<a){
			c+= 3;
			l1++;
		}
		
      while(q<l){
			q+=3;
			l2++;
		}
		
      ans = l1*l2;
      cout << ans << endl;
      l=0, a=0, l1=1, l2=1,c=3, q=3, ans=0;
	}
	
   return 0;
}