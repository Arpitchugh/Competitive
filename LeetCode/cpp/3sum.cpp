/*
Q15. 3Sum
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans = {};
        vector<int> temp = {};
        // sort the loop
        sort(nums.begin(),nums.end()); //O(nlogn)

        for(int i=1;i<nums.size()-2;++i){ // iterate over the complete array
            // let's fix a number first and then use binary search on the remaining array.
            int value = nums[i];
            if(nums[i] == nums[i+1]){
                continue;
            }
            int left = i-1;
            int right = nums.size()-1;
            while(left<right){ // find if target values exist in the remaining array
                if(value + nums[left] + nums[right] < 0){left++;}
                else if(value + nums[left] + nums[right] > 0){right--;}
                // we found the number pair
                else{
                    temp= {value,nums[left],nums[right]};
                    ans.push_back(temp);
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {-1,0,-1};
    vector<vector<int>> ans = s.threeSum(nums);
    if(ans.size()<=0) cout <<"No available solutions"<<endl;
    for(int i=0;i<ans.size();++i){
        for(int j=0;j<ans[i].size();++j){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}