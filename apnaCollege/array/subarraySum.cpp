#include <iostream>
using namespace std;
int main()
{
    int arrayLen, totalSum;
    int arr[20];

    //input
    cin >> arrayLen >> totalSum;
    for (int i = 0; i < arrayLen; i++)
    {
        cin >> arr[i];
    }
    
    //algo
    // j => Loop iterator
    int i = 0, j = 0, start = -1, end = -1, sum = 0;

    while (j < arrayLen && sum + arr[j] <= totalSum) 
    {
        sum += arr[j];
        j++;
    } // after this loop sum is either greater than or equal to totalSum

    // If sum is equal
    if (sum == totalSum)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }
    
    while (j < arrayLen)
    {
        sum += arr[j];
        
        while (sum > totalSum)
        {
            sum -= arr[i];
            i++;
        }

        if (sum == totalSum) //Store values
        {
            start = i + 1;
            end = j + 1;
            break;
        }
        j++;
    }
    cout << start <<" "<< end;

    return 0;
}

// cout << arrayLen <<" "<< Sum;
// for (int i = 0; i < arrayLen; i++)
// {
//     cout << arr[i] << ' ';
// }

//algo
// int pointerInit = arr[0], pointerLast = arr[0];
// int arraySum = 0;
// for (int i = 0; i < arrayLen; i++)
// {
//     if (Sum < arraySum)
//     {
//         pointerInit = arr[i];
//         arraySum = pointerInit + pointerLast;
//     }
//     else if (Sum > arraySum)
//     {
//         pointerLast = arr[i];
//         arraySum = pointerInit + pointerLast;
//     }
// }
// cout << pointerInit << pointerLast;
