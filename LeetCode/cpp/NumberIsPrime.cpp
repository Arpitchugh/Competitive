/*
Check if the given number is prime or not.
Prime -> 0 1 2 3 5 7 11 ....
*/

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 1) return false;
    
    else {
        for(int i=2;i<=sqrt(n);i++){
            if(n%i == 0) return false;
        }
    }
    return true;
}

int main(){
    cout << "Enter number of prime numbers you want to print: ";
    int n;
    cin >> n;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){   
         cout << i << " ";
        }
    }
    return 0;
}