// Find the biggest element in the array

#include <iostream>
using namespace std;
int main()
{
    // input
    int n;
    cin >> n;
    int arr[10];
    int maxNum;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Algo
    maxNum = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (maxNum < arr[i])
        {
            maxNum = arr[i];
        }
    }

    // output
    cout << maxNum;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}