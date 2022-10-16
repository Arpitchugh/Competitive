/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Input: nums = [1,3,4,2,2]
Output: 2
*/

let nums = [1, 3, 4, 2, 2];

/*
// using sorting O(nlogn) <- merge sort/ inbuilt function sort
const tempNums = nums;
console.log(tempNums.sort((a,b)=>a-b)) // (a,b) => a-b, take two argument from array and check whether first elem - second elem is -ve or +ve, if -ve it arranges them in ascending  order else in descending order
*/

// using array O(n)
const removeDuplicatesUsingArray = nums => {
	const tmepNums = [];
	for (let i = 0; i < nums.length; i++) {
		if (tmepNums[nums[i]]) {
			return nums[i];
		} else {
			tmepNums[nums[i]] = 1;
		}
	}
};

const removeDuplicatesUsingBinarySearch = nums => {

console.log(removeDuplicates(nums));
