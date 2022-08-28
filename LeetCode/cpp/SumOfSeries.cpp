/*
Program To Find Sum Of Series 1 + 2 + 4 + 8 + 16 + 32 + . . . . . . . . n
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the number of terms: ";
    int n,val=0,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        val = pow(2,i);
        cout << val << " + ";
        sum+=val;
    }
    cout << endl <<"sum is: " <<sum;
    return 0;
}