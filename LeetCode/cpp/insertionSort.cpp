// Insertion Sort -> swap until left element is smaller than current element

#include <iostream>
using namespace std;

void swap(int *i, int *j){
  int temp = *i;
  *i = *j;
  *j = temp;
}

void InsertionSort(int arr[],int n){
  for (int i = n; i > 0; i--) {
    if(arr[i]>arr[i+1]){
      swap(&arr[i],&arr[i+1]);
    }
  }
}

void dis(int arr[],int n){
  for(int i=0;i<n;i++){
    cout << arr[i] << ' ';
  }
  cout << endl;
}

int main(int argc, char const *argv[]) {
  int arr[5] = {5,4,3,2,1};
  int n = 5;

  InsertionSort(arr,n);
  dis(arr,n);
  return 0;
}
