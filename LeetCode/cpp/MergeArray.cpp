#include <bits/stdc++.h>
using namespace std;
void merge(vector <int> &a , int m , vector <int> &b , int n)
{
// Brute Force
    // for(int i = 0 ; i < n ; i++)
    //     a[i + m] = b[i];
    // sort(a.begin() , a.end());

// Optimized
    int i=nums1.size()-1,j=m-1,k=n-1;

        while(j>=0 && k>=0){
            if(nums1[j] > nums2[k]){
                nums1[i--] = nums1[j--];
            }else{
                nums1[i--] = nums2[k--];
            }
        }
        while(k>=0){
            nums1[i--] = nums2[k--];
        }
    }
}
int main()
{
    vector <int> a = {1 , 2 , 3};
    vector <int> b = {2 , 6 , 7};
    int m = 3 , n = 3;
    a.resize(m + n);
    merge(a , m , b , n);
    for(int &x : a)
        cout << x << " ";
    return 0;
}
