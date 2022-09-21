#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {6, 5, 4, 3, 2, 1}; //
    int len = v.size() - 1;
    vector<int> temp = {0, 0, 0, 0, 0, 0};
    temp[len] = v[0] + v[1];
    temp[len - 1] = v[len] + v[0];
    temp[len - 2] = v[len - 1] + v[len];
    for (int i = 0; i < len - 1; i++)
    {
        temp[i] = v[i + 1] + v[i + 2];
        // if (i == len - 1)
        // {
        //     temp[i] = v[len] + v[0];
        // }
        // else
        // {
        //     temp[i - 1] = v[i + 1] + v[i];
        // }
    }
    for (auto i : temp)
    {
        cout << i << " ";
    }
}