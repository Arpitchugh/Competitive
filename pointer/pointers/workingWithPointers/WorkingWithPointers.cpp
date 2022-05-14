#include <iostream>
using namespace std;

int main() {
    int i[] = {1,2,34,5};
    int* p[] = { i,i + 1,i + 2,i + 3,i + 4 };
    cout << i << endl; // array address
    cout << &i << endl; // array address

    cout << p << endl; // pointer address
    cout << *p << endl; // array address
    cout << *(*p + 0); // array first element

    return 0;
}   