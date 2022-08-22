/*
287. Find the Duplicate Number

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int bruteFindDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return nums[i];
            }
        }
        return 0;
    }
    int optimizedFindDuplicate(vector<int>& nums){
        
        return 0;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,4,3,2,2};
    int ans = s.bruteFindDuplicate(nums);
    cout<<ans<<endl;
    return 0;
}