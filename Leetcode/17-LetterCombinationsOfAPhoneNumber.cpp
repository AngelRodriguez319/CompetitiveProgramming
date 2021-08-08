
// Author: Angel Gabriel Rodriguez
// Date: May / 13 / 2021
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
        
    map<char, string> letters = {
        {'2', "abc"},{'3', "def"},{'4', "ghi"},
        {'5', "jkl"},{'6', "mno"},{'7', "pqrs"},
        {'8', "tuv"},{'9', "wxyz"}
    };
    
    void solve(string &aux, const string digits, vector<string> &solutions, int i){
        if(i == digits.size()){
            solutions.push_back(aux);
            return;
        }
        for(char c : letters[digits[i]]){
            aux += c;
            solve(aux, digits, solutions, i+1);
            aux.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        vector<string> solutions;
        string temp;
        solve(temp, digits, solutions, 0);
        return solutions;
    }
};