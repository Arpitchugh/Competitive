// Find Numbers with Even Number of Digits

#include <vector>
#include <iostream>

using namespace std;

// This is wrong for someone reason even I don't know
// class Solution
// {
// public:
//     int findNumbers(vector<int> &nums)
//     {
//         int i;
//         int count = 0;
//         int digitLength = 0;
//         int len = sizeof(nums) / sizeof(nums[0]);
//         for (i = 0; i < len; i++)
//         {
//             while (nums[i])
//             {
//                 nums[i] = nums[i] / 10;
//                 digitLength++;
//             }
//             if (digitLength % 2 == 0)
//                 count++;

//         }
//         return count;
//     }
// };

class Solution
{
public:
    int numberOfDigits(int n)
    {
        int cnt = 0;
        while (n > 0)
        {
            n /= 10;
            cnt++;
        }
        return cnt;
    }
    int findNumbers(vector<int> &a)
    {
        int result = 0;
        for (int &i : a)
            if (numberOfDigits(i) % 2 == 0)
                result++;
        return result;
    }
};
int main()
{
    int i, a;
    Solution one;
    vector<int> v = {555, 90, 48, 1771};
    cout << one.findNumbers(v);
    return 0;
}