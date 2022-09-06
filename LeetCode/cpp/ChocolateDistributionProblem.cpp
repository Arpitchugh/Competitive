/*
Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 
Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.

Example1
Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
Output: Minimum Difference is 2 
Explanation:
We have seven packets of chocolates and we need to pick three packets for 3 students 
If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.
Example2
Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
Output: Minimum Difference is 6 
*/

#include<bits/stdc++.h>
using namespace std;

int solution(int arr[], int size, int window){
    // we can't distribute chocolate
    if(window > size){
        return -1;
    }
    
    // sort array
    sort(arr ,arr + size);
    
    // logic
    int min_diff = INT_MAX;
    for(int i=0;i<size-window+1;i++){
        int diff = arr[i+ window-1] - arr[i];
        if(min_diff>diff) {
            min_diff = diff;
        }
    }
    return min_diff;
}

int main(){
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int window = 7;
    cout << solution(arr,size,window);
    return 0;
}