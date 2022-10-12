/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true
*/

// using Map()
const containDuplicateUsingMap = nums => {
	let map = new Map();
	for (let i = 0; i <= nums.length; ++i) {
		if (map.has(nums[i])) {
			return true;
		}
		map.set(nums[i], i);
	}
	return false;
};

// using Set() -> it only stores unique values repetition's are ignored
const containDuplicateUsingSet = nums => {
	const s = new Set(nums);
	return s.size !== nums.length;
};
console.log(containDuplicateUsingMap([1, 1]));
console.log(containDuplicateUsingSet([1, 3, 2,]));
