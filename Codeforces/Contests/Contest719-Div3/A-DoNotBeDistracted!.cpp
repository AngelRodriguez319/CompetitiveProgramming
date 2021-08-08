#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: May / 05 / 2021
// https://codeforces.com/contest/1520/problem/A

int main(){
    
    int t; cin >> t;
    char aux;
    bool result = true;
    vector<char> letters;
    
    while(t--){
         int n; cin >> n;
         while(n--){
            cin >> aux;
            int amount = count(letters.begin(), letters.end(), aux);
            if(amount > 0){
                if(letters.back() != aux)
                    result = false;
            }else{
                letters.push_back(aux);
            }
         }
         cout << (result ? "YES" : "NO") << endl;
         result = true;
         letters.clear();
    }
    
    return 0;
}