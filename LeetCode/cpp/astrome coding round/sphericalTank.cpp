/*A spherical tank of radius R is filled with a volume V of liquid. What is the depth h of the liquid?

Input Format:R,V
Output Format: h

Your program needs to read radius and volume from the standard input and emit only the height in its standard output as given in the examples below. Please note, the input and output has been rounded-off to seven decimal places.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R,V;
    cin>>R>>V;
    double h = (V/(3.14159265358979*R*R));
    cout<<h;
    return 0;
}

// Language: cpp
// Path: LeetCode\cpp\astrome coding round\multiplyNumbers.cpp
// Compare this snippet from LeetCode\cpp\astrome coding round\myString.cpp:
// #include <iostream>
// using namespace std;
// 
// int main() {
// 	string s;
// 	cin>>s;
// 	cout<<s;
// 	return 0;
// }

// Language: cpp
// Path: LeetCode\cpp\astrome coding round\myString.cpp
// Compare this snippet from LeetCode\cpp\astrome coding round\powerOf2.cpp:
// #include <iostream>
// using namespace std;
// 
// int main() {
// 	int n;
// 	cin>>n;
// 	if(n==0) {
// 	    cout<<"false";
// 	}
// 	while(n%2==0) {
// 	    n=n/2;
// 	}
// 	if(n==1) {
// 	    cout<<"true";
// 	}
// 	else {
// 	    cout<<"false";
// 	}
// 	return 0;
// }

// Language: cpp
// Path: LeetCode\cpp\astrome coding round\powerOf2.cpp
// Compare this snippet from LeetCode\cpp\astrome coding round\powerOfTwo.cpp:
// #include <iostream>
// using namespace std;
// 
// int main() {
// 	int n;
// 	cin>>n;
// 	if(n==0) {
// 	    cout<<"false";
// 	}
// 	while(n%2==0) {
// 	    n=n/2;
// 	}
// 	if(n==1) {
// 	    cout<<"true";
// 	}
// 	else {
// 	    cout<<"false";
// 	}
// 	return 0;
// }

// Language: cpp
// Path: LeetCode\cpp\astrome coding round\powerOfTwo.cpp
// Compare this snippet from LeetCode\cpp\astrome coding round\reverseString.cpp:
// #include <iostream>
// using namespace std;
// 
// int main