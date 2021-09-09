// 0 1 2 3 4 5 6 7 8

#include <iostream>
using namespace std;

// int fun(int n)
// { int sum = 0;
//     for (int i = 1; i <= n; ++i)
//     {
//         sum += i;
//         return sum;
//     }
// }

int fun(int n)
{
    int initialNum = 0;

    for (int i = 0; i <= n; i++)
    {
        initialNum += i;
    }

    return initialNum;
}

int main()
{
    int number, sum;
    cout << "Enter a positive integer: ";
    cin >> number;

    sum = fun(number);
    cout << sum;
    return 0;
}

// int main()
// {
//     int n, sum = 0;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     for (int i = 1; i <= n; ++i)
//     {
//         sum += i;
//     }

//     cout << "Sum = " << sum;
//     return 0;
// }