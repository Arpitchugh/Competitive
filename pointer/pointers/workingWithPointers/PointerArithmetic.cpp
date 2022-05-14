#include <iostream>
using namespace std;

int main() {
    int p1, p2;
    int array[50]{};
    int n = sizeof(array) / sizeof(array[0]);

    for (size_t i = 0; i < 10; i++) {
        std::cin >> array[i];
    }

    p1 = array[0];
    p2 = array[n - 1];
    int temp;
    while (n > 0) {
        temp = p1;
        p1 = p2;
        p2 = temp;
        n--;
    }

    for (size_t i = 0; i < 10; i++) {
        std::cout << array[i];
    }

    return 0;
}
