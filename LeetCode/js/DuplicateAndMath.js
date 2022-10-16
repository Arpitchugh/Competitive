/* find missing number and duplicate number in an array considering elements will be from 1 to N */
// only works if one element is missing and duplicated
let nums = [3, 2, 1, 4, 2]; // missing 5, duplicate 2

let missing = 0,
	duplicate = 0;
function usingMath(nums) {
	let size = nums.length,
		numsSum = 0,
		sumOfSquareOfNums = 0,
		sumOfSquareOftemps = 0,
		tempSum = (size * (size + 1)) / 2,
		j = 1;
	for (let i = 0; i < size; i++) {
		numsSum = numsSum + nums[i];
		sumOfSquareOfNums += nums[i] ** 2;
		sumOfSquareOftemps += j ** 2;
		j++;
	}
	let c1 = tempSum - numsSum;
	let c2 = (sumOfSquareOftemps - sumOfSquareOfNums) / c1;
	// console.log(numsSum, tempSum, sumOfSquareOfNums, sumOfSquareOftemps, c1, c2);
	// c2 = missing + duplicate;
	// c1 = missing - duplicate;
	missing = (c1 + c2) / 2;
	duplicate = missing - c1;
	return [missing, duplicate];
}

function usingSorting(nums) {
	console.log(nums.sort());
	for (let i = 0; i < nums.length; i++) {
		if (nums[i] !== i + 1) duplicate = nums[i];
	}
}

function usingMap(nums) {
	let map = new Map();
	for (let i = 0; i < nums.length; i++) {
		if (map.get(nums[i])) missing = nums[i];
		map.set(nums[i], i);
	}
	for (let i = 0; i < nums.length; i++) {
		if (!map.get(i + 1)) duplicate = i + 1;
	}
	return [map, missing, duplicate];
}

let [map, mis, dup] = usingMap(nums);

console.log(map);
console.log('missing and duplicate number are: ' + mis + ' ' + dup);
