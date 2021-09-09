// check if a number is prime

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    bool flag = 0;
    cin >> number;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "Not prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime" << endl;
    }

    return 0;
}