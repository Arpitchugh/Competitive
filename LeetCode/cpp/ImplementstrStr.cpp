/*
Many unexpected things are happening here
*/

#include <iostream>
#include <String>
using namespace std;

int strStr(string haystack, string needle) {
	int l1 = 0, l2 = 0, count = 0; // pointer to s1 = l1 pointer to s2 = l2
	int index = 0;
	int len = haystack.length();
	while (len >= 0) {
		if (needle[l2] == haystack[l1]) {
			count++;
			index = l1;
			l2++;
			cout << needle[l2];
		}
		else {
			l1++;
		}
		len--;
	}
	if (count == needle.length()) return index;
	else return -1;
}

int main(int argc, char const* argv[]) {
	string s1 = "hello";
	string s2 = "ll";
	cout << strStr(s1, s2);
	return 0;
}
