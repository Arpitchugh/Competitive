#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i <= nums.size(); i++)
        {
            if (nums[i] > 0)
            { // num is positive
                if (nums[i + 1] > 0)
                {
                    sum += nums[i];
                }
                else
                {
                    if (abs(nums[i + 1]) > nums[i])
                        i = i + 2;
                    else
                        sum += nums[i];
                }

            }
            else
            { // num is negative
                if ((nums[i - 1] + nums[i + 1] > abs(nums[i])))
                {
                    sum = sum + nums[i] + nums[i + 1];
                    i = i + 2;
                }
                else
                    i++;
            }
        }
        return sum;
    }
};

int main()
{
    vector<int> v = {-1, 2, 1, -5, 4};
    Solution s;
    cout << s.maxSubArray(v) << " ";
}

// - 2, 1, -3, 4, -1, 2, 1, -5, 4
// 5, 4, -1, 7, 8
