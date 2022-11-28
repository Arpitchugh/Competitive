/**
 * reverse an array
 * reverse 2D array
 * reverse linkedList
 */

// SECTION array
arr = [1, 2, 3, 4, 5, 6, 7, 8];
const reverseArray = arr => {
	let leftPointer = 0;
	let rightPointer = arr.length - 1;
	while (leftPointer <= rightPointer) {
		let temp = arr[leftPointer];
		arr[leftPointer] = arr[rightPointer];
		arr[rightPointer] = temp;
		leftPointer++;
		rightPointer--;
	}
};
reverseArray(arr);
console.log(arr);
