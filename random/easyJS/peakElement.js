// peak element
/*
1. Biggest element in the array
2. A peak element is an element that is greater than its neighbors.
3. peak element in linkedList
4. peak element in 2D array
*/

/** NOTE
 * * using "0" in front of number converts it into octet for and using "0x" converts it into hexadecimal
 * console.log(0x20)
 */
let arr = [1, 3, 2, 5, 3, 7, 8];
let arr1 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1];
let arr2 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1];

function greatestElementInArray(arr) {
	let maxElement = arr[0];
	arr.forEach(element => {
		if (element > maxElement) maxElement = element;
	});
	return maxElement;
}

const greatestNeighboringElement = arr => {
	let greatestElemArr = [];
	for (let index = 1; index < arr.length - 1; index++) {
		let element = arr[index];
		if (element >= arr[index - 1] && arr[index + 1] <= element)
			// multiple comparison with single elem can't happen in "if" -> arr[index + 1] <= element >= arr[index - 1]
			greatestElemArr.push(element);
	}
	return greatestElemArr;
};

console.log(greatestNeighboringElement(arr))