#include <iostream>

using namespace std;

int main(){

	int a = 2;
	int b = 3;

	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "a AND b = " << (a & b) << endl; 
	cout << "a OR b = " << (a | b) << endl; 
	cout << "a XOR b = " << (a ^ b) << endl; 
	cout << "a Shift Left by b = " << (a << b) << endl; 
	cout << "a Shift Right by b = " << (a >> b) << endl; 
	cout << "Complement a = " << (~a) << endl; 

	return 0;
}