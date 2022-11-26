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

//SECTION - peak in array
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

// SECTION - linkedList
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

	push_At_Front(value) {
		const node = new Node(value);
		node.next = this.head;
		this.head = node;
		return this.head;
	}
	push_At_End(value) {
		let node = new Node(value);
		let temp = this.head;
		if (!temp) {
			temp = node;
		}
		while (temp.next) {
			temp = temp.next;
		}
		temp.next = node;
	}
	push_At_Index(index, value) {
		let node = new Node(value);
		let temp = this.head;
		while (index > 1) {
			// index will be counted from 0 onwards in list
			if (temp == null) {
				console.error(
					`index out of bound can't add value: ${value}, adding at last position in list`
				);
				this.push_At_End(value);
				return;
			}
			temp = temp.next;
			index--;
		}
		let c;
		c = temp.next;
		temp.next = node;
		temp.next.next = c;
	}
	push_Multiple_Values(arr) {
		arr.forEach(element => {
			this.push_At_End(element);
		});
	}
	pop_At_Begin() {
		let curr = this.head.value;
		this.head = this.head.next;
		return `${curr} removed from beginning`;
	}
	pop_At_End() {
		let temp = this.head;
		while (temp.next.next) {
			temp = temp.next;
		}
		let val = temp.next.value;
		temp.next = null;
		return `${val} removed from end`;
	}
	pop_At_Index(index) {
		let temp = this.head;
		let tempIndex = index;
		while (tempIndex > 2) {
			if (temp == null) {
				console.log('Index out of bound removing last element');
				console.log(this.pop_At_End());
				return;
			}
			temp = temp.next;
			tempIndex--;
		}
		let val = temp.next.value;
		temp.next = temp.next.next;
		return `${val} removed from index: ${index}`;
	}
	delete() {
		this.head = null;
	}
	getNode(index) {
		let i = index;
		let temp = this.head;
		while (index > 1) {
			if (temp === null) {
				console.log('nothing exist on the provided index');
				return;
			}
			temp = temp.next;
			index--;
		}
		console.log(`node at index '${i}' is ${temp.value}`);
		return;
	}
	reverse() {
		let prevNode = null;
		let currentNode = this.head;
		if (currentNode === null) return;

		let nextNode;
		while (currentNode) {
			nextNode = currentNode.next;
			currentNode.next = prevNode;
			prevNode = currentNode;
			currentNode = nextNode;
		}
		this.head = prevNode;
	}
	print() {
		let list = [];
		let temp = this.head;
		while (temp) {
			list.push(temp.value);
			temp = temp.next;
		}
		console.log(`printing complete list: [${list}]`);
		console.log(list);
	}

	peakElementInLinkedList() {
		let tempHead = this.head;
		let peak = 0;
		while (tempHead) {
			if (tempHead.value > peak) peak = tempHead.value;
			tempHead = tempHead.next;
		}
		console.log(`peak element in the list is ${peak}`);
		return peak;
	}
}

// const linkedList1 = new LinkedList();
// linkedList1.push_At_Front(10);

// linkedList1.push_At_End(8);
// linkedList1.push_At_End(9);

// linkedList1.push_At_Index(1, 1);

// linkedList1.push_At_Front(20);

// linkedList1.push_At_End(22);
// linkedList1.push_At_End(44);
// linkedList1.push_At_End(2);

// linkedList1.pop_At_Index(2);
// linkedList1.pop_At_Index(4);

// linkedList1.getNode(3);
// linkedList1.delete();

// linkedList1.reverse();
// linkedList1.peakElementInLinkedList();
// linkedList1.print();

// SECTION -  2D array
let Array2D = [
	['arpit', 2, 3],
	[5, 6, 7],
	[4, 5, 6],
];
const peakElementIn2DArray = arr => {
	let peakIn2D = 0;
	for (let indexOf1D = 0; indexOf1D < arr.length; indexOf1D++) {
		for (
			let indexof2D = 0;
			indexof2D < arr[indexOf1D].length;
			indexof2D++
		) {
			if (peakIn2D < arr[indexOf1D][indexof2D])
				peakIn2D = arr[indexOf1D][indexof2D];
		}
	}
	return peakIn2D;
};

console.log(peakElementIn2DArray(Array2D));