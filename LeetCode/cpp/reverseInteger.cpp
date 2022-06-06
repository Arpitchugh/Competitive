#include <iostream>
#include <math.h>
using namespace std;

int containerSize(int n) {
	int i = n, count = 0, t = 0;
	int temp = 0;
	int res = 0;
	//count of int
	while (i != 0)
	{
		i /= 10;
		++count;
	}
	// algo
	while (temp <= count)
	{
		int m = pow(10, count - temp - 1);
		t = (n % 10) * m;
		n /= 10;
		res += t;
		temp++;
	}
	return res;
}

int main() {
	int n = 123;
	cout << containerSize(n);
	return 0;
}
