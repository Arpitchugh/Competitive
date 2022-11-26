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
		if (!temp) {
			this.head = node;
			return;
		}
		while (temp && temp.next) {
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
	minAndMaxInLinkedList() {
		let temp = this.head;
		let min = this.head.value;
		let max = this.head.value;
		while (temp) {
			if (temp.value < min) min = temp.value;
			if (temp.value > max) max = temp.value;
			temp = temp.next;
		}
		console.log([min, max]);
	}
}

let list = new LinkedList();
list.push(3);
list.pushMultiple([3, 4, 5, 6, 8, 69, 7, 19, 90, 9, 10]);
list.minAndMaxInLinkedList();
list.print();
