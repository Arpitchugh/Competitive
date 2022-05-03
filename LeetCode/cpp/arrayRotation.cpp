// rotate the array to the right by k steps, where k is non-negative.

#include "bits/stdc++.h"
using namespace std;


int rotation(vector<int> &nums,int k){


  k = k % nums.size();

//initial reverse
  int l = 0;
  int r = nums.size()-1;
  int temp;
  while (l<r) {
     temp = nums.at(r);
     nums.at(r) = nums.at(l);
     nums.at(l) = temp;

     l = l+1;
     r = r-1;
  }

//left reverse
  l=0;
  r = k-1;
  temp =0;
  while (l<r) {
     temp = nums.at(r);
     nums.at(r) = nums.at(l);
     nums.at(l) = temp;

     l = l+1;
     r = r-1;
  }
  //right reverse
  l = k;
  r = nums.size()-1;
 temp = 0;
  while (l<r) {
       temp = nums.at(r);
       nums.at(r) = nums.at(l);
       nums.at(l) = temp;

       l = l+1;
       r = r-1;
    }
}




int main() {

  int count,elem;
  cout << "Input size of array: " << '\n';
  cin >> count;
  vector<int> array;

  for (size_t i = 0; i < count; i++) {
    cin >> elem;
    array.push_back(elem);
  }

  int k;
  cout << "Input start index: ";
  cin >> k;

  rotation(array,k);

  for (size_t j = 0; j < count; j++) {
    cout << array.at(j);
  }
  std::cout << '\n';
  return 0;
}
