#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1,-1};
        //empty
        if(nums.size() == 0){
            return res;
        }
        
        int start = 0, end = nums.size()-1;
        //starting index
        while(start<end){
            int mid = start + (end-start)/2;
            
            if(nums[mid]>=target){
                end = mid;
            } else {
                start = mid+1;
            }
        }
        //number not present
        if(nums[start] != target){
            return res;
        }
            
        res[0] = start;
        end = nums.size();
        
        //ending index    
        while(start<end){
            int mid = start + (end-start)/2;
            if(nums[mid] > target){
                end = mid;
            } else {
                start = mid+1;
            }
        }
        res[1] = start-1;
        return res;
    }
};