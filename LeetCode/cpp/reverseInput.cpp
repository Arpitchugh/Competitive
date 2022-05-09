
#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 5;
	int arr[SIZE]{};
	cout << "Enter numbers: \n";
	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];

	cout << "Reversed Array:\n";
	int temp, start = 0, end = SIZE - 1;
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << "\t";
	cout << endl;
	return 0;
}
