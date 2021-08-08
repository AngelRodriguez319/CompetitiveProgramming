#include<bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/1249/A

int main (){
   
   long long int t, m, i, j, k;
   vector<long long int> v;
   cin >> t;
   
   while(t--){
      cin >> m;
        bool band = true;
        v.resize(m);
        for(i = 0; i < m; i++)
            cin >> v[i];
        sort(v.begin(),v.end());
        k = v.size();
        for(i = 0; i < k-1; i ++){
            if(v[i] == v[i+1] -1){
               band = false; 
               break;
            }
        }
        if(band) cout<<"1\n";
        else cout<<"2\n";
        v.clear();        
    }
    return 0;
}