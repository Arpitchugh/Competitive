// a^2 = b^2 + c^2   (5 = 4 +3) => (25 = 16 + 9)

#include <iostream>
using namespace std;

bool check(int a, int b, int c)
{
    int x = max(a, max(b, c));
    int y, z;

    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        z = b;
        y = a;
    }


    if (x*x == y*y + z*z)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (check(num1, num2, num3))
    {
        cout << "It's a Pythagoream triplet";
    }
    else
    {
        cout << "it's not a Pythagorean Triplet";
    }
    return 0;
}
