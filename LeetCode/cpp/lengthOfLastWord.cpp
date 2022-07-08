#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int result = 0;

        for (char& c : s) {
            if (c == ' ') {
                count = 0;
                continue;
            }
            else {
                count++;
            }

            result = count;
        }

        return result;

    }
};

int main(int argc, char const* argv[])
{
    string s = "arpit is doing great";
    Solution ans;
    cout << ans.lengthOfLastWord(s);
    return 0;
}