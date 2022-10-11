/* 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
 
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

// const twoSum = (nums, target) => {
// let map = new Map();
// for (let i = 0; i < nums.length; i++) {
//     if (map.has(target - nums[i])) {
//         console.log(map.get(target - nums[i]), i);
//         return;
//     }
//     map.set(nums[i], i);
// }
// console.log('element not found, sad!!');
// };

const twoSum = (nums, target) => {
	// let map = new Map();
	// map.has(); -> return bool
	// map.get(); -> return value
	// map.set(); -> add key:value to map
	let map = new Map();
	for (let i = 0; i < nums.length; ++i) {
		if (map.has(target - nums[i])) {
			console.log(map.get(target - nums[i]), i);
			return;
		}
		map.set(nums[i],i); // save memory by storing value at nums[i] as key,{2=>0,11=>1} to avoid storing repetitive values
	}
	console.log('element not found, sad!!');
};

nums = [2, 11,11, 15, 7];
twoSum(nums, 9);
