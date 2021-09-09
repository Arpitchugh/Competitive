#include <iostream>
using namespace std;

class test{
	int x;
public:
	void setx(int x){
		this-> x=x;
	}
	void print(){
		cout<< "x = "<<x<<endl;
	}
};

int main(){
	test obj;
	int x=20;
	obj.setx(x);
	obj.print();
	return 0;
}
