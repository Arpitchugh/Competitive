// #include <bits/stdc++.h>
// using namespace std;
//
// int rotation(vector<int>& array,int start, int end){
//   int count = array.size();
//   while(start<end){
//     int temp = array.at(start);
//     array.at(start) = array.at(end);
//     array.at(end) = temp;
//     start++;
//     end--;
//   }
//
// }
//
// void leftRotate(vector<int>& array, int d, int n)
// {
//     if (d == 0)
//         return;
//     d = d % n;
//
//     rotation(array, 0, d - 1);
//     rotation(array, d, n - 1);
//     rotation(array, 0, n - 1);
// }
// void print(vector<int>& array, int size){
//   for (int i = 0; i < size; i++)
//         cout << array[i] << " ";
// }
// int main() {
//   int count,elem;
//   cout << "Input size of array: " << '\n';
//   cin >> count;
//   vector<int> array;
//
//   for (size_t i = 0; i < count; i++) {
//     cin >> elem;
//     array.push_back(elem);
//   }
//
//   int start,end;
//   cout << "Input start and end index: ";
//   cin >> start >> end;
//
//   rotation(array,start,end);
//   print(array,count);
//
//
//   return 0;
// }



#include <bits/stdc++.h>
using namespace std;

/*Function to reverse arr[] from index start to end*/
void reverseArray(int arr[], int start, int end)
{
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n)
{
    if (d == 0)
        return;
    // in case the rotating factor is
    // greater than array length
    d = d % n;

    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

/* Driver program to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    // Function calling
    leftRotate(arr, d, n);
    printArray(arr, n);

    return 0;
}
