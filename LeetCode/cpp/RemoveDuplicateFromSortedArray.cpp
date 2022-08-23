/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.

Example 1:
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 1;
        int right = 1;
        for(int i =0; i<nums.size()-1;i++){
            if(nums[i] != nums[right]){
                nums[left] = nums[right];
                left++;
                right++;
            }
            else{
                right++;
            }
        }
        return left;
    }
};

int main(){
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = s.removeDuplicates(nums);
    cout<<k<<endl;
    for(int i =0; i<k;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}