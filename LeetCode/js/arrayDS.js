// Implement Array in JavaScript

class OurArray {
	constructor() {
		this.length = 0;
		this.data = {}; // An array in JavaScript is Object
	}

	/** Lookup: Time Complexity = O(1)
	 * @param {number} index
	 * @return {any} item
	 */
	get(index) {
		if (this.length == 0) return 'Array is empty';
		return this.data[index];
	}

	/**
	 * Time Complexity = O(1)
	 * @param {any} item
	 * @return {number} length
	 *    New length of the array
	 */
	push(item) {
		this.data[this.length] = item;
		this.length++;
		return this.length;
	}

	/**
	 * Time Complexity = O(1)
	 * @return {number} lastItem
	 */
	pop() {
		if (this.length === 0) return 'Array is empty';
		const lastItem = this.data[this.length];
		delete this.data[this.length];
		this.length--;
		return lastItem;
	}

	/**
	 * Time Complexity = O(N)
	 * @param {number} index
	 *    Index of the item to be deleted
	 * @return {any} item
	 *    Deleted item
	 */
	deleteAtIndex(index) {
		if (index > this.length) return 'Index out of bound';
		for (let i = index; i < this.length - 1; i++) {
			let temp = this.data[i];
			this.data[i] = this.data[i + 1];
			this.data[i + 1] = temp;
		}
		const item = this.data[this.length - 1];
		delete this.data[this.length - 1];
		this.length--;
		return item;
	}
}

const myThings = new OurArray();

myThings; // { length: 0, data: {} }
// console.log(myThings);
myThings.get(0); // undefined

myThings.push('Books'); // 1
myThings.push('Car'); // 2

myThings.pop(); // 'Car'

myThings.push('House'); // 2
myThings.deleteAtIndex(1); // 'House'
myThings.get(0); // 'Books'

myThings; // { length: 1, data: { '0': 'Books' } }
console.log(myThings);
