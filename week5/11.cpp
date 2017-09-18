#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a, b;

	cin >> a >> b;

	while(b != 0){
		a = a % b;
		swap(a, b);
		// int k = a;
		// a = b;
		// b = k;
	}

	cout << a;


	return 0;
}
