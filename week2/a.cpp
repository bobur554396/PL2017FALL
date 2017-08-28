#include <iostream>

using namespace std;

int main(){

	int a = 2;

	cout << sizeof(a) << endl;

	cout << "size of short: " << sizeof(short) << endl;
	cout << "\tsize of int: " << sizeof(int) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << "\n";
	cout << "size of char: " << sizeof(char) << "\n";
	cout << "size of bool: " << sizeof(bool) << endl;


	return 0;
}