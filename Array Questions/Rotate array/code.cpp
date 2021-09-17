#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums, int high, int low){
        while(low < high){
            swap(nums[high], nums[low]);
            low++, high--;
        }
    };
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums,n-k-1,0);
        reverse(nums,n-1,n-k);
        reverse(nums,n-1,0);
    }
};