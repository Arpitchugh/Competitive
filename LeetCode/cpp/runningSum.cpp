/*

	Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
	Return the running sum of nums.

Example 1:
	Input: nums = [1,2,3,4]
	Output: [1,3,6,10]
	Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
	vector <int> result;
	for (int i = 0; i < nums.size(); i++) {
		if (i == 0)
			result.push_back(nums[i]);
		else
		{
			int val = result[i - 1] + nums[i];
			result.push_back(val);
		}
	}
	return result;
}


int main()
{
	vector<int> nums = { 1,2,3,4 };
	for (int i = 0; i < runningSum(nums).size(); i++)
		std::cout << runningSum(nums)[i] << ' ';
	
	return 0;
}