#include <iostream>
using namespace std;
int main()
{
    int col, row;
    int i,j;

    cout<< "Enter number of rows and columns: ";
    cin >> row >> col;

    for (i=1; i <=row; i++){
        for (j=1; j<=col; j++){
            cout << "*";
        }
        cout << "\n";
    }


    return 0;
}