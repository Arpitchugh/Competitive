/*
Q1365. How Many Numbers Are Smaller Than the Current Number

Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
Return the answer in an array.

Example 1:
Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
Explanation:
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3).
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1).
For nums[3]=2 there exist one smaller number than it (1).
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();++i){
            int count = 0;
            for(int j=i+1;j<nums.size();++j){
                if(nums[i]>nums[j]){
                    count++;
                }    
            }
            result.push_back(count);
        }
        return result;
    }  
};

int main(){
    int nums[] = {8,1,2,2,3};
    Solution s;
    s.smallerNumbersThanCurrent(nums);
}