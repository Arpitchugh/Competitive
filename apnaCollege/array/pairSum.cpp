#include <iostream>

using namespace std;

bool pairSum(int arr[], int n, int num)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == num)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] < num)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;
}

int main()
{
    //Input Array
    int n=6;
    // cin >> n;
    int arr[] = {1,4,6,2,7,9};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    cout << pairSum(arr, 6, num);
    return 0;
}