// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.

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
