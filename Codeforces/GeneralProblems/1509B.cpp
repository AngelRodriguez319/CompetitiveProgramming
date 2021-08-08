#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 18 / 2021
// https://codeforces.com/problemset/problem/1509/B 

void solution(){
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t = 0, m = 0;
    for(auto c: s){
        if(c == 'T'){
            t++;
        }else{
            m++;
        }
    }
    if(m * 2 != t){
        cout << "NO\n";
        return;
    }
    int ct1 = 0, cm2 = 0;
    for(auto a : s){
        if(a == 'T'){
            ct1++;
        }else{
            cm2++;
        }
        if(cm2 > ct1){
            cout << "NO\n";
            return;
        }
    }
    ct1 = 0;
    cm2 = 0;
    for(int i=n-1;i>=0;i--){
        if(s[i] == 'T'){
            ct1++;
        }else{
            cm2++;
        }
        if(cm2 > ct1){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;

    while(t--){
      solution();
    }
 
    return 0;
}
