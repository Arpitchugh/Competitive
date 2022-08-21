/*
2011. Final Value of Variable After Performing Operations

There is a programming language with only four operations and one variable X:

++X and X++ increments the value of the variable X by 1.
--X and X-- decrements the value of the variable X by 1.
Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(int val=0;val<operations.size();++val){
            if(operations[val][1] == '+'){ans++;}
            else{ans--;}
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<string> operations = {"--X","X++"};
    cout<<s.finalValueAfterOperations(operations)<<endl;
    return 0;
}