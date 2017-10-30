#include <iostream>


using namespace std;

int main(){

	int a = 2;
	int b = 3;

	int *p;

	p = &a;
	cout << "&a = " << &a << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	
	*p = 10;
	cout << a << endl;

	p = &b;

	return 0;
}