#include <iostream>
#include <cmath>

using namespace std;


int main(){

	int a = 2;
	cout << "initially a = 2\n";

	int b = a++;
	cout << "b = a++\n";
	cout << "a = " << a << " " << "b = "<< b << "\n\n\n\n"; 



	a = 2;
	b = ++a;
	cout << "b = ++a\n";
	cout << "a = " << a << " " << "b = "<< b << endl << endl; 


	return 0;
}