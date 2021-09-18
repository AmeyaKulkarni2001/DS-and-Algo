#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    class Solution {
    public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1) return;
        int start = 0;
        int end = 0;
        while(end < nums.size()){
            if(nums[end] == 0){
                end++;
            } else {
                int temp = nums[start];
                nums[start] = nums[end];
                nums[end] = temp;
                start++,end++; 
            }
        }           
    }    
};