/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
   
    void sortColors(vector<int>& nums) {
        int i=0;
        int temp;
        int j=nums.size()-1;
        while(i<=j){
            if(nums[i]>nums[j]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
            else if(nums[i]==nums[j]){
                temp = nums[i];
                nums[i] = nums[j-1];
                nums[j-1] = temp;
            }
            else{
                j--;
            }
        }
    }
    void sortColor(vector<int>& nums){
        int red=0,white=0,blue=0;
        for(int i =0;i<nums.size();i++){ //O(n)
            if(nums[i] == 0){
                red++;
            }
            else if(nums[i]==1){
                white++;
            }
            else{
                blue++;
            }
        }
        int i=0;
        while(red--){
            nums[i] = 0;
            i++;

        }
        while(white--){
            nums[i] = 1;
            i++;
        }
        while(blue--){
            nums[i] = 2;
            i++;
        }
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,0,2,1,1,0};
    s.sortColor(nums);
    for(int i=0;i<nums.size();++i){
        cout<<nums[i]<<" ";
    }
    return 0;
}