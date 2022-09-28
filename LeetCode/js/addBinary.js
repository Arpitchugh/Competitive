// Given two binary strings a and b, return their sum as a binary string.

// Example 1:
// Input: a = "11", b = "1"
// Output: "100"

var addBinary = function (a, b) {
	let first = a.length - 1,
		second = b.length - 1;
	let carry = 0,
		sum = 0;
	if (first < second) {
		let temp = a;
		a = b;
		b = temp;
		temp = first;
		first = second;
		second = temp;
	}
	(a = a.split('')), (b = b.split(''));

	while (first >= 0 || second >= 0) {
		sum = (parseInt(a[first]) || 0) + (parseInt(b[second]) || 0) + carry;
		a[first] = sum % 2;
		carry = sum >= 2 ? 1 : 0;
		first--;
		second--;
	}
	a = a.join('');

	if (carry) {
		a = '1' + a;
	}
	return a;
};

const ans = addBinary('11', '1');
console.log(ans);
