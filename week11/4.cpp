#include <iostream>


using namespace std;

int main(){

	int a = 2;

	int &ref = a;

	int b = 3;

	ref = b;

	cout << ref << " " << a;

	return 0;
}