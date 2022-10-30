/*Given an input of alphabetical string separated by hyphen. For example, greeN-whIte-orAnge-bluE-BeaD Sort the words alphabetically in an ascending order. For example input this would mean, BeaD-bluE-greeN-orAnge-whIte Next, sort the letters of each word with the condition such that, if the numeric sum of numbers attached to individual letters of the word is even, then sort that word in ascending order else sort it in descending order. The final output of the code should be in all lower case. For the example case it would be as follows, abde-belu-rngee-aegnor-wtihe */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cctype>
using namespace std;


int main()
{
    string s;
    getline(cin, s);
    vector<string> v;
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-')
        {
            v.push_back(temp);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    v.push_back(temp);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (isdigit(v[i][j]))
            {
                sum += v[i][j] - '0';
            }
        }
        if (sum % 2 == 0)
        {
            sort(v[i].begin(), v[i].end());
        }
        else
        {
            sort(v[i].begin(), v[i].end(), greater<char>());
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << (char)tolower(v[i][j]);
        }
        if (i != v.size() - 1)
        {
            cout << "-";
        }
    }
    return 0;
}
// string sortString(string s)
// {
//     string result;
//     vector<string> words;
//     string word;
//     for (auto c : s)
//     {
//         if (c == '-')
//         {
//             words.push_back(word);
//             word = "";
//         }
//         else
//         {
//             word += c;
//         }
//     }
//     words.push_back(word);
//     sort(words.begin(), words.end());
//     for (auto w : words)
//     {
//         int sum = 0;
//         for (auto c : w)
//         {
//             sum += c;
//         }
//         if (sum % 2 == 0)
//         {
//             sort(w.begin(), w.end());
//         }
//         else
//         {
//             sort(w.begin(), w.end(), greater<char>());
//         }
//         result += w + "-";
//     }
//     result.pop_back();
//     transform(result.begin(), result.end(), result.begin(), ::tolower);
//     return result;
// }

// int main()
{
    string s;
    cin >> s;
    cout << sortString(s);
    return 0;
}