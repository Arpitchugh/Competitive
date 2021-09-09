// Print inverted Half Pyramid using numbers


#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " *";
        }
        cout<<endl;
    }
}

