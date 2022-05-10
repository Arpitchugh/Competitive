#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
    int num,num1;
    int array[3]{};
    std::cout << "INput your num" << '\n';
    std::cin >> num;
    num1 = num;
    int j = 2;
    while (num >= 1 && j>=0) {
        array[j] = num % 10;
        num /= 10;
        j--;
    }
    int elem = 0, sum = 0;
    for (int i = 0; i < 3;i++) {
        elem = array[i];
        sum += (elem * elem * elem);
    }
    if (sum == num1) {
        cout << "It is armstrong";
    }
    else {
        cout << "nope";
    }

    return 0;
}
