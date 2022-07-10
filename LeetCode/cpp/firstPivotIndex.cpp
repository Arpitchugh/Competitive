/*

Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.



Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11

*/

#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    int leftSum[n], rightSum[n], sum = 0;
    leftSum[0] = nums[0];
    rightSum[n - 1] = nums[n - 1];
    int i = 0, j = n - 1;
    while (++i<n && --j>-1)
    {
        leftSum[i] = leftSum[i - 1] + nums[i];
        rightSum[j] = rightSum[j + 1] + nums[j];
    }
    for (int i = 0; i < n; i++)
        if (leftSum[i] == rightSum[i])
            return i;
    return -1;
}

int main(int argc, char const* argv[])
{
	vector<int> nums = { 1,7,3,6,5,6 };
	cout << pivotIndex(nums);
	return 0;
}