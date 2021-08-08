
// Author: Angel Gabriel Rodriguez
// Date: June / 22 / 2021
// https://leetcode.com/problems/subsets/

class Solution {
public:
    
    int giveMeBit(int num, int pos){
        return (num >> pos) & 1;
    }

    vector<vector<int>> subsets(vector<int>& nums) {

       int i = 0, j = 0;
       int size = pow(2, nums.size());
       vector<vector<int>> response;

       for(i = 0; i < size; i++){
          vector<int> combination;
          for(j = 0; j < nums.size(); j++){
             if(giveMeBit(i, j) == 1)
                combination.push_back(nums[j]); 
          }
          response.push_back(combination);
       }

       return response;
        
    }
    
};
