#include <iostream>
using namespace std;
int main()
{
    int elements;

    cout << "Enter the last number in row: ";
    cin >> elements;

    for (int i = 0; i <= elements; i++)
    {
        for (int j = 1; j < elements+1-i; j++)
        {
            cout << j << "";
        }
        cout<< endl;
    }

    return 0;
}