/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        make(res, n, 0, "");
        return res;
    }

    void make(vector<string> &res, int n, int m, string str)
    {
        if (n == 0 && m == 0)
        {
            res.push_back(str);
            return;
        }
        if (m > 0)
            make(res, n, m - 1, str + ')');
        if (n > 0)
            make(res, n - 1, m + 1, str + '(');
    }
};

int main(){
    Solution s;
    vector<string> res = s.generateParenthesis(3);
    for (auto i : res)
        cout << i << endl;
    return 0;
}