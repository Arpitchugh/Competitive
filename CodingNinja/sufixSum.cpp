// a[] = 2 3 4 5 6
// s[] = 20 18 15 11 6

#include "iostream"
using namespace std;

int main() {
  int n;
  std::cout << "input size of array: " << '\n';
  cin >> n; // Length
  int arr[n];
  int suf[n];
  // Take Input
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Logic
  suf[n-1] = arr[n-1];
  for (int j = n-2; j >= 0; j--) {
    suf[j] = suf[j+1] + arr[j];
  }

  // print output
  for (int k = 0; k < n; k++) {
    std::cout << suf[k] <<" ";
  }
  return 0;
}
