#include <bits/stdc++.h>
#define endl '\n'
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 30 / 2021
// https://codeforces.com/problemset/problem/352/B

auto comp (const pair<int,int> &a, const pair<int,int> &b) -> bool {
    return a.first < b.first;
}

auto main() -> int { _io

    int n, i = 0, aux, difference; 
    bool isBad = false;
    cin >> n;

    set<int> numbers;
    map<int, vector<int>> countNumbers;
    vector <pair<int,int>> results;

    for(i = 1; i <= n; i++) {
        cin >> aux;
        countNumbers[aux].push_back(i);
        numbers.insert(aux);
    }

    for(auto number : numbers) {
        isBad = false;
        if(countNumbers[number].size() == 1){
            results.push_back(make_pair(number, 0));
        }else if(countNumbers[number].size() == 2){
            results.push_back(make_pair(number, countNumbers[number][1] - countNumbers[number][0]));
        }else{
            difference = countNumbers[number][1] - countNumbers[number][0];
            for(i = 1; i < countNumbers[number].size()-1; i++){
                if(countNumbers[number][i+1] - countNumbers[number][i] != difference){
                    isBad = true;
                    break;
                }
            }
            if(!isBad)
                results.push_back(make_pair(number, difference));
        }

    }

    sort(results.begin(), results.end(), comp);
    cout << results.size() << endl;

    for(auto result : results)
        cout << result.first << " " << result.second << endl;

    return 0;
}