#include <iostream>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: April / 17 / 2021
// https://www.hackerrank.com/challenges/ctci-fibonacci-numbers/problem

int fibonacci(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}