#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = -100000;
        int curr = 0;
        for(int i = 0; i < nums.size(); i++){
            curr += nums[i];
            if(curr > maxsum){
                maxsum = curr;
            }
            if(curr < 0){
                curr = 0;
            }
        }
        return maxsum;
    }
};