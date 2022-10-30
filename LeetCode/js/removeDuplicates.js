/*
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

/* two pointers ->
compare the current element with the next one and if both are same move to next element else increment the current pointer and assign the next element to the current pointer,
*/

removeDuplicates = nums => {
	let curr = 0;
	for (let i = 1; i < nums.length; i++) {
		if (nums[curr] !== nums[i]) {
			curr++;
			nums[curr] = nums[i];
		}
	}
	nums.splice(curr + 1);
	return nums.length;
};

nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4];
removeDuplicates(nums);
console.log(nums);
