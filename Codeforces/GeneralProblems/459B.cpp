#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 30 / 2021
// https://codeforces.com/problemset/problem/459/B

auto main() -> int { _io

    ll n, i, aux; 
    cin >> n;
    
    ll max = 0, min = INT_MAX;
    map<ll, ll> num_flowers;
    
    for(i = 0; i < n; i++){
        cin >> aux;
        num_flowers[aux]++;
        min = std::min(min, aux);
        max = std::max(max, aux);
    }
    
    cout << max - min << " ";
    if(max == min)
        cout << ((num_flowers[max])*(num_flowers[max]-1))/2 << endl;
    else
        cout << num_flowers[max] * num_flowers[min] << endl;
    return 0;

}