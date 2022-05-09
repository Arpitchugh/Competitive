#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n >= 1){
          sum += n%10;
          n /= 10;
    }
    cout << sum << '\n';
    return 0;
  }
