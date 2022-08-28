/*
Check if the given number is prime or not.
Prime -> 0 1 2 3 5 7 11 ....
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"Not Prime";
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cout<<"Not Prime";
                break;
            }
            else{
                cout<<"Prime";
            }
        }
    }
    return 0;
}