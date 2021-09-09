/* Fibonacci Series ( 0 1 1 2 3 5 8 13 21 )
    -> T(n) = t(n-2) + t(n-1)
*/

#include <iostream>
using namespace std;

// int fib(int num){
//     return num = num;
// }

// int main(){

//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         fib(n);
//     }

// }

void fib(int n)
{
    int t1 = 0, t2 = 1;
    int next;

    for (int i = 0; i < n; i++)
    {
        cout << t1 << endl;
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    fib(n);

    return 0;
}