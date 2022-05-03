// Second highest element in an array in O(n)
/*
Take two elements and compare both elements whichever is smaller shift the other element and move to next location and save it



*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int array[] = {5,10 ,200};
  int size = sizeof(array) / sizeof(array[0]);
  // Ayush approch
  //
  // std::vector<int> elem = {0};
  // for (int i = 0; i < size; i++) {
  //   if(array[i]>elem.back()){
  //     elem.push_back(array[i]);
  //   }
  // }
  // cout << elem.at(elem.size() - 2) << '\n';
  // int arrayObject[100];


  //Arpit approch
  //

  int secondHighest = 0;
  int highest = 0;
  if(size<=1) {
    cout << "Array size is less than 2";
    return 0;

  }
  if(array[0]>array[1]){
    highest = array[0];
    secondHighest = array[1];
  }
  else{
    highest = array[1];
    secondHighest = array[0];
  }

  for (int i = 2; i < size; i++) {
    if (array[i] > highest) {
      secondHighest = highest;
      highest = array[i];
    }
    else if(array[i]>secondHighest && array[i] != highest){
      secondHighest = array[i];
    }
  }

  cout << secondHighest << '\n';


  return 0;
}
