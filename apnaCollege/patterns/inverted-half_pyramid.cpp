#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout<< "Enter length of star pattern: ";
    cin >> num;

    for (int i=num; i>=1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<< "*";
        }
        cout << endl;
    }

    return 0;
}