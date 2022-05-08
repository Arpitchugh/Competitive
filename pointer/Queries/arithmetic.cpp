#include <iostream>
using namespace std;


void pointerInitialization(){
	int a = 10;
	int *p; // pointer to integer
	p = &a; // Assigning address to pointer

  /*
	we can also do the above pointer initialization in one line as:
  int *p =&a;
  */

	std::cout << "Value of a before dereferencing is " << a << std::endl;
	*p = 20; // derefrencing
	std::cout << "Value of a after derefrencing is " << a << std::endl;

}

void pointerArithmetic() {
  // Only add and sub is allwed in pointerArithmetic

	int a = 190;
	int* p = &a;
  int zump = 3;
  int b;


	cout << "Size of pointer " << p <<"\n";
  cout << "Size of pointer " << p+zump <<"\n";
  cout << "Value at location a " << a <<"\n";
  cout << "Value at location a+"<< zump << " " << *(p+zump) <<"\n"; // it will have a garbage value

}

void pointerTypes(){
  int a =1025;
  int *p = &a;

  std::cout << "size of char " << sizeof(int)<< '\n';
  std::cout << "address is: " << p << " Value is: "<< *p << '\n';

  std::cout << "size of char " << sizeof(char)<< '\n';

  /*
  pp = static_cast<char*>(&p); //typecasting
  char* pp = (char*)&p;
  std::cout << "address is: " << &pp << " Value is: "<< pp << '\n';
  */
  /*
  char pp = *((char*)&p);
  std::cout << "address is: " << &pp << " Value is: "<< pp << '\n';
  */
  // both code output ♀

  char *c = (char*)p;

  std::cout << "address is: " << &c+1 << " Value is: "<< *c+2 << '\n'; // don't know what is happening

}


int main(int argc, char const *argv[]) {
  // pointerInitialization();
  // pointerArithmetic();
  // pointerTypes(); // don't know what is happening

  return 0;
}
