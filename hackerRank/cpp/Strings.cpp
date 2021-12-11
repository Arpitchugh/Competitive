#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;

    int len1, len2;
    len1 = str1.size();
    len2 = str2.size();
    cout << len1 << " "<< len2 << endl;

    string concat;
    concat = str1 + str2;
    cout << concat << endl;

    char swap1 = str1[0];
    char swap2 = str2[0];
    
    str2[0] = swap1;
    str1[0] = swap2;
    
    cout << str1 <<" "<<str2;

    return 0;
}