#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)
        return (-1); /*Wrong value*/
    if (n == 0)
        return (1); /*Terminating value*/
    else
    {
        return (n * factorial(n - 1));
    }
}

int main()
{
    int number, ans;
    cin >> number;

    ans = factorial(number);
    cout << ans;

    return 0;
}
