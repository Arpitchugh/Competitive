#include <iostream>
#include <string>

using namespace std;

int main(){

  #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
  #endif
  
  string firstname;
 
  cout << "Enter your first name.\n ";
  cin >> firstname;
  cout << "Hello " << firstname
       <<". It was nice to know your name!\n";
}
