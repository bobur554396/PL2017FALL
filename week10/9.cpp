#include <iostream>
#include <cmath>

using namespace std;


int cnt = 0; // global variable

void doIt(){
	int c = 11; // local variable
	cnt++;
}


int main(){
	
	doIt();

	cout << cnt;
	// cout << c; // error

	return 0;
}