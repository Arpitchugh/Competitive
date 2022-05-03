// Second highest element in an array in O(n)
/*
Take two pointer and compare both elements whichever is smaller shift the other pointer to next location and save it as well

*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int array[] = {10,2,5,20,6,8};
  int size = sizeof(array) / sizeof(array[0]);
  // Ayush approch
  /*
  std::vector<int> elem = {0};
  for (int i = 0; i < size; i++) {
    if(array[i]>elem.back()){
      elem.push_back(array[i]);
    }
  }
  cout << elem.at(elem.size() - 2) << '\n';
  */

  //Arpit approch
  int secondHighest = 0;
  int i = 0, j = array[size-1];

  for (int i = 0; i < size; i++) {
    if(array[i]<array[j]){
      i++;
      if(secondHighest<array[i]) secondHighest = array[i];
    }
    else if(array[i]>array[j]){
      j--;
      if(secondHighest<array[j]) secondHighest = array[i];
    }
  }
  cout << secondHighest << '\n';


  return 0;
}
