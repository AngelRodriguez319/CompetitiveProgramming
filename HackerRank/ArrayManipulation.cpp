#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: March / 25 / 2021
// https://www.hackerrank.com/challenges/crush/problem

int main(){
    int n = 0, m = 0;
    long i = 0, aux = 0, max = 0, a = 0, b = 0, k = 0;
    cin >> n >> m;
    vector<long> arr(n);
    for(i = 0; i < m; i++){
        cin >> a >> b >> k;
        arr[a-1] += k;
        if(b != n){
            arr[b] -= k;
        }
    } 
    for(auto x : arr){
        aux += x;
        if(aux > max) 
            max = aux;
    }
    cout << max << endl;
    return 0;
}