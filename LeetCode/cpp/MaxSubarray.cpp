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
    /* what I want to do is:
       * continue to do increment left until next element is greater than the previous element and
       * continue to decrement right until right most element is greater than one which comes next.
       * after that add all the remaning elements in the vector.
       *
       * What is happening is:
       * It does both increment/decrement initaily but after it finds the value which are greater it adds

    */
    int myMaxSubArray(vector<int>& nums) {
            int left = 0;
            int right = nums.size()-1;
            int sum = 0;

            for(int i =0; i < nums.size(); i++){
                if (nums[left] < nums[left + 1]) {
                    left += 1;
                }
                else if (nums[right] < nums[right - 1]) {
                    right -= 1;
                }
                else {
                    while (left<=right)
                    {
                        sum += nums[left] + nums[right];
                    }
                }
            }
            return sum;

        }
};

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    cout << sol.maxSubArray(nums);
    return 0;
}
