#include<iostream>
#include<map>
#include<vector>
using namespace std;
// map Solution

class Solution {
public:
    int max(int a,int b){
      if(a>b) return a;
      else return b;
    }

    int houseRobber(vector<int>& numbers) {
      int rob1 = 0;
      int rob2 = 0;
      for (int i = 0; i < numbers.size(); i++) {
        int temp = max(rob1+numbers[i],rob2);
        rob1 = rob2;
        rob2 = temp;
      }
        return rob2;
    }

};


int main() {
    Solution s;
    vector<int> v;
    v = { 1,2,3,1 };
    cout << s.houseRobber(v);

    return 0;

}
