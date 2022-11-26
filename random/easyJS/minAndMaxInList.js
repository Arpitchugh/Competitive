// MIN AND MAX IN LIST
/**
 * find min and max in 1D array
 * find min and max in 2D array
 * find min and max in a linkedList
 */

// SECTION - min and max in 1D array
let arr = [1, 2, 3, 4, 5, 6, 7, 8];
const minMaxInArray = arr => {
	let min = arr[0];
	let max = arr[0];
	arr.forEach(element => {
		if (element < min) min = element;
		if (element > max) max = element;
	});
	return [min, max];
};
// console.log(`min max from 1D array: ${minMaxInArray(arr)}`);

//SECTION - min and max in 2D array
let arr2D = [
	[1, 2, 3],
	[4, 5, 6],
	[7, 8, 9],
];
const minMaxIn2DArray = arr2D => {
	let min = arr2D[0][0];
	let max = arr2D[0][0];
	arr2D.forEach(row => {
		row.forEach(element => {
			if (element < min) min = element;
			if (element > max) max = element;
		});
	});
	return [min, max];
};
// console.log(`min max from 2D array: ${minMaxIn2DArray(arr2D)}`);

//SECTION - min and max in a linkedList
class Node {
	constructor(value) {
		this.value = value;
		this.next = null;
	}
}

class LinkedList {
	constructor(head = null) {
		this.head = head;
	}
	push(value) {
		let node = new Node(value);
		let temp = this.head;
		while (temp.next) {
			temp = temp.next;
		}
		temp.next = node;
	}
	print() {
		let temp = this.head;
		while (temp) {
			console.log(temp.value);
			temp = temp.next;
		}
	}
	pushMultiple(arr) {
		arr.forEach(element => {
			this.push(element);
		});
	}
	minAndMaxInLinkedList() {}
}

let list = new LinkedList(new Node(1));
list.pushMultiple([2, 3, 4, 5, 6, 8, , 7, 19, 90, 9, 10]);
list.print();
