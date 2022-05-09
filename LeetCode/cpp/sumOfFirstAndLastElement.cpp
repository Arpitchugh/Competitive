#include <iostream>
using namespace std;

int firstelem(int num){
  while (num>10) {
    num /= 10;
  }
  return num;
}

int lastelem(int num){
  return num%10;
}


int main()
{
  int ans;
  int num;
  std::cin >> num;
  // int array[4]{};
  // for (size_t i = 0; i < 4; i++) {
  //   std::cin >> array[i];
  // }
  int first = firstelem(num);
  int last = lastelem(num);
  ans = first + last;
  std::cout << ans << '\n';
  return 0;
}
