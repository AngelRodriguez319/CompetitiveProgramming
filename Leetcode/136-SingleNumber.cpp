
// Author: Angel Gabriel Rodriguez
// Date: May / 20 / 2021
// https://leetcode.com/problems/single-number/

class Solution {
public:
    
    int singleNumber(vector<int>& nums) {
        
        map<int, int> numbers;
        
        for(auto c : nums){
            if(numbers.count(c) > 0)
                numbers[c] += 1;
            else
                numbers[c] = 1;
        }
        
        for(auto c : nums){
            if(numbers[c] == 1)
                return c;
        }
        
        return 0;
    }
};