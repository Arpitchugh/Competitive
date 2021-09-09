#include<iostream>
using namespace std;

int search(int arr[],int end,int big,int item)
{
    

    while (end <= big) 
    {
        int mid = (big + end) / 2;
        if (item > mid)
        {
            big == mid + 1;
            loc++;
            return search(arr, big, end, item);
        }

        else if (item < mid)
        {
            end = mid - 1;
            loc++;
            return search(arr, big,end, item);
        }
            
        else
        {
            return mid;
            return loc;
        }
        
    }
}

int main(void){
    int loc = 0, arr[10], n,i, item, ub, lb, end, big, mid;
    
    cout << "Enter your number of elements: " << endl;
    cin >> n;
    cout << "Input your array: " << endl;

    for (i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    arr[0] == lb;
    arr[n - 1] = ub;
    
    cout << "Enter the element you want to find: " << endl;
    cin >> item;

    int result = search(arr, lb, ub, item);

    if (result == 1)
    {
        cout << "Element is not present in array at index " << loc << endl;
    }
    else
    {
        cout << "Element is present at index \n";
    }
    
    return 0;
}
    