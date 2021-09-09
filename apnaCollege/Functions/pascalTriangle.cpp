/*
1            0C0
1 1          0C1 1C1
1 2 1        0C2 1C2 2C2
1 3 3 1      0C3 1C3 2C3 3C3
1 4 6 4 1    0C4 1C4 2C4 3C4 4C4
...
*/

#include <iostream>
using namespace std;


int fact(int num){
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }
    
}

    