#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: June / 07 / 2021
// https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/n-queensrecursion-tutorial/

auto canBePlaced(int row, int column, vector<vector<int>>& grid) -> bool{
    
    for (int i = 0; i < row; i++) {
        if (grid[i][column] == 1) return false;
    }
    
    for (int i = 1; column - i >= 0 && row - i >= 0; i++) {
        if (grid[row - i][column - i] == 1) return false;
    }
    
    for (int i = 1; i < (int)grid.size(); i++) {
        if (row - i > 0 && column + i < (int)grid.size()) {
            if(grid[row - i][column + i] == 1) return false; 
        }
    }
    return true;
}

auto nQueens(vector<vector<int>>& grid, int row) -> bool{
    if (row == (int)grid.size()) return true;
    for(int column = 0 ; column < (int)grid.size() ; column ++){
        if(canBePlaced(row, column, grid)){
            grid[row][column] = 1;
            if(nQueens(grid, row + 1)) return true;
            grid[row][column] = 0;
        }
    }
    return false;
}

auto main() -> int{
    int n; cin >> n;
    if(n==2 or n==3){
        cout << "Not possible\n";
        return 0;
    }
    vector<vector<int>> grid(n, vector<int>(n, 0));
    nQueens(grid, 0);
    for(int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j < n ; j ++){
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }
}
