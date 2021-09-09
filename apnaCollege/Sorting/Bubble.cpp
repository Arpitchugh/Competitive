// 2 45 9 0 1 54

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (a[i] > a[i + 1])
            {
                int swap = a[i];
                a[i] = a[i + 1];
                a[i + 1] = swap;
            }
            else if (a[i] == a[i + 1])
            {
                a[i] = a[i + 1];
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}