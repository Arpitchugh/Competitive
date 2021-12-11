#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Declaration
    int n, q, i;
    cin >> n >> q;
    string temp;
    vector<string> hrml; // Create a dynamic array of type string, of name 'hrml' here.
    vector<string> quer;

    //Taking Input
    cin.ignore(); // when we hit enter after inputing string '\n' get's in cin Buffer/CallStack because of which when we want to cout/Use our String we get a empty line because of '\n' that's why we use cin.ignore() to ignore last Buffer/CallStack input.
    for (i = 0; i < n; i++)
    {
        getline(cin, temp); // used to read a string syntax -> " getline(whereToReadFrom, whereToSaveInput, whenToStop) "
        hrml.push_back(temp); // vector operation to insert elements in array
    }
    for (i = 0; i < q; i++)
    {
        getline(cin, temp);
        quer.push_back(temp);
    }

    map<string, string> m; // syntax -> " map <Key, Value> ObjectName " It is implemented using Self-balanced binary search tree. YT link -> https://www.youtube.com/watch?v=nPSDR5nZzHA
    vector<string> tag;
    
    for (i = 0; i < n; i++)
    {
        temp = hrml[i]; // Store value of 
        temp.erase(remove(temp.begin(), temp.end(), '\"'), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());
        if (temp.substr(0, 2) == "</")
        {
            tag.pop_back();
        }
        else
        {
            stringstream ss;
            ss.str("");
            ss << temp;
            string t1, p1, v1;
            char ch;
            ss >> ch >> t1 >> p1 >> ch >> v1;
            string temp1 = "";
            if (tag.size() > 0)
            {
                temp1 = *tag.rbegin();
                temp1 = temp1 + "." + t1;
            }
            else
                temp1 = t1;
            tag.push_back(temp1);
            m[*tag.rbegin() + "~" + p1] = v1;
            while (ss)
            {
                ss >> p1 >> ch >> v1;
                m[*tag.rbegin() + "~" + p1] = v1;
            }
        }
    }
    for (i = 0; i < q; i++)
    {
        if (m.find(quer[i]) == m.end())
            cout << "Not Found!\n";
        else
            cout << m[quer[i]] << endl;
    }
    return 0;
}
