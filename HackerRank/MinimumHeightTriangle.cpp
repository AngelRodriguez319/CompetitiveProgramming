#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 17 / 2021
// https://www.hackerrank.com/contests/infinitum18/challenges/lowest-triangle

int lowestTriangle(int base, int area){
    return ceil((float)(2*area)/base);
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}