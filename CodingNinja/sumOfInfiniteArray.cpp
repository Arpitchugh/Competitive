// // return addition of array from l to r considering array will continue to increase in same format.
// // eg: arr[] = 1 2 3; l = 5,r = 8; ans = 9.

#include <bits/stdc++.h>
using namespace std;

// Function to find the sum of elements
// in a given range of an infinite array

void rangeSum(int arr[], int N, int L, int R)
{
	// Stores the sum of array elements from L to R
	int sum = 0;

	// Traverse from L to R
	for (int i = L - 1; i < R; i++) {
		sum += arr[i % N];
	}

	// Print the resultant sum
	cout << sum;
}

// Driver Code
int main()
{
  int n;
  cin >> n;
	int arr[n];
  for (size_t i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  int L,R;
  cout << "input queries index: ";
  std::cin >> L >> R;
	int N = sizeof(arr) / sizeof(arr[0]);
	rangeSum(arr, N, L, R);

	return 0;
}
