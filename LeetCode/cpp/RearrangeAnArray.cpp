#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {

  int array[] = {-1,2,4,5,6,1};
  int size = sizeof(array)/sizeof(array[0]);
  vector<int> ans;
  for (size_t i = 0; i < size; i++) {
    cout << array[i] << '\n';
  }

  for(int j = 0;j < size;j++){
    for (size_t k = 0; k < size; k++) {
      if(j == array[k]){
        ans.push_back(k);
        break;
      }
    }
    ans.push_back(-1);
  }

  for (size_t i = 0; i < size; i++) {
    std::cout << endl;
    cout << ans.at(i) << '\n';
  }
  return 0;
}
