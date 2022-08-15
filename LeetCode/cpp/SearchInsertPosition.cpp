/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

Input: nums = [1,3,5,6], target = 5
Output: 2
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]== target) return i;
            if(nums[i]>target) return i;
        }
        return nums.size();
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,5,6};
    int target = 5;
    int ans = s.searchInsert(nums, target);
    cout<<ans<<endl;
    return 0;
}