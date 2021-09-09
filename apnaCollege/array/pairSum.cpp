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
            cout << low << " " << high<<endl;
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    pairSum(arr, n, num);
    return 0;
}