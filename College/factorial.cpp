#include<iostream>
using namespace std;

int main(){

	int num,i;
	double fact=1;
	
	cout<<"Input your number: "<<endl;
	cin >> num;
	
	for(i=1;i<=num;i++){
		fact *= i; // factorial = factorial * i
	}
	
	cout << "factorial of the number '"<< num <<"' is: " << fact << endl;


	return 0;
}