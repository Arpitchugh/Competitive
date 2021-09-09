#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= key)
    {
        int mid = (start + key) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    //Input from User
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << BinarySearch(arr, n, key) << endl;

    return 0;
}