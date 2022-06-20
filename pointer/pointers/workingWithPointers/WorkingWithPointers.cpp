
// C++ program to find LCM of two numbers
#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result;// return gcd of a nd b
}

// Function to return LCM of two numbers
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
// Driver code
int main()
{
    int size;
    cin >> size;

    int arr[10];
    int var;
    for (int i = 0; i < size; i++)
    {
        cin >> var;
        arr[i] = var;
    }
    int ans=0;
    for (int i = 0; i < size; i++) {
        if (lcm(arr[i], arr[i + 1]) == gcd(arr[i], arr[i + 1])) {
            arr[i] = arr[i]-1;
            ans += 1;
        }
    }
    cout << ans;
    return 0;
}
