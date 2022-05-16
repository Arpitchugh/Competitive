// bubble Sort -> compare two corresponding elements and swap if i>j
// in this sorting technique greatest element is put at last and then loop begins again from first index

#include <iostream>
using namespace std;

void swap(int* i, int* j) {
    int remp = *i;
    *i = *j;
    *j = remp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    /* for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
            cout << arr[j] << " " << arr[j + 1] << endl;
        }
      }
    */
    // recursice approch
    if(n==1){ return;}

    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
        swap(&arr[i],&arr[i+1]);
        swapped = true;
      }
    }
    bubbleSort(arr, n-1);

        // IF no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            return;

}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(int argc, char const* argv[]) {
    int arr[5] = { 22,65,25,22,11 };
    /* int arr[5] = {0,0,0,1}; //this will print  0,0,0,0,1 but I don't want that */

  //  int n = size_of(arr)/size_of(arr[0]);
    int n = 5;
    bubbleSort(arr, n);
    print(arr, n);

    return 0;
}
