#include <iostream>


using namespace std;

int main(){

	int num1, num2;

	int *p;

	p = &num1;
	*p = 2;
	cout << num1 << " " << num2 << endl;

	p = &num2;
	*p = 3;

	cout << num1 << " " << num2 << endl;


	return 0;
}