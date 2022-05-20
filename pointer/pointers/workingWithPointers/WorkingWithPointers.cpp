// Insertion Sort -> swap until left element is smaller than current element

#include <iostream>
using namespace std;

void swap(int* i, int* j) {
    int temp = *i;
    *i = *j;
    *j = temp;
    cout << *i << *j;
}

void InsertionSort(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        int ket = arr[i];
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void dis(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(int argc, char const* argv[]) {
    int arr[5] = { 5,4,3,2,1 };
    int n = 5;

    InsertionSort(arr, n);
    dis(arr, n);
    return 0;
}
