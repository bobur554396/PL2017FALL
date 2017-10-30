#include <iostream>


using namespace std;

int main(){

	int a[4] = {1, 2, 3, 4};

	cout << a << endl;

	// a[0] <=> *a
	// a[2] <=> *(a+2)

	cout << *a << endl;

	*(a + 1) = 20;

	// for(int i = 0; i < 4; i++)
	// 	cout << a[i] << " ";

	for(int i = 0; i < 4; i++){
		cout << *(a+i) << " ";
	}


	cout << endl;


	return 0;
}