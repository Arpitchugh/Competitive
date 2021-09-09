#include <iostream>
using namespace std;
int main(){
    
    // Insertion

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Algo

    for (int i = 0; i < n; i++)
    {
        int currentElem = arr[i];  //Select the first unsorted element
        int j = i - 1;
        while (j>=0 && arr[j]>currentElem)
        {
            arr[j + 1] = arr[j]; // Shift elements to the right to make space for element in unsorted array
            j = j - 1;
        }
        arr[j + 1] = currentElem; // Insert elements to its corrent position
    }

    // Print
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}