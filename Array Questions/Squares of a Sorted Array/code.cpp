#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        vector<int> res(nums.begin(), nums.end());
        
        for(int pointer = nums.size() - 1; pointer >= 0; pointer--){
            
            if(nums[start]*nums[start] >= nums[end]*nums[end]){
                
                res[pointer] = nums[start]*nums[start];
                start++;
                
            } else {
                
                res[pointer] = nums[end]*nums[end];
                end--;
                
            }
        }
        return res;
    }
};