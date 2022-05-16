// Selection Sort -> find min in array shift it by initial index from where the search started


#include <iostream>
using namespace std;

void swap(int* i, int* j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < 4; i++) {
        int min = i;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[min]) {
                min = j;
                swap(&arr[min], &arr[i]);
            }
        }
    }
}

void print(int arr[], int size) {
    for (size_t k = 0; k < 5; k++) {
        cout << arr[k] << " ";
    }
    cout << '\n';
}

int main(int argc, char const* argv[]) {
    int arr[5] = { 64,25,22,12,11 };
    int size = 5;

    selectionSort(arr, size);
    print(arr, size);

    return 0;
}
