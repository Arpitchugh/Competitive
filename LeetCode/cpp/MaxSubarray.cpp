// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.
// return max element which can be created from this contiguous array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int pMax = nums[0];
        int res = nums[0];
        for(int i=1;i<nums.size();i++){
            pMax = max(pMax + nums[i], nums[i]);
            res = max(res, pMax);
        }
        return res;
    }
};

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    cout << sol.maxSubArray(nums);
    return 0;
}
