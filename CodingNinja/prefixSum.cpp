#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
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
  suf[0] = arr[0];
  for (size_t j = 1; j < n; j++) {
    suf[j] = suf[j-1] + arr[j];
  }


  // print
  for (int k = 0; k < n; k++) {
    std::cout << suf[k] <<" ";
  }
  return 0;
}
