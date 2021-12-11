#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arraySize, QueryNumber;
    cin >> arraySize >> QueryNumber;

    vector<vector<int>> a(arraySize); // This will take care of our 2D array

    for (int i = 0; i < arraySize; i++)
    {
        int k;
        cin >> k;

        a[i].resize(k);

        for (int j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < QueryNumber; i++)
    {
        int c, b;
        cin >> c >> b;
        cout << a[c][b] << endl;
    }
    return 0;
}
