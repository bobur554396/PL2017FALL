#include <iostream>
#include <cmath>

using namespace std;


int main(){

	int a;
	cin >> a;

	if(a % 2 == 0){
		cout << "even";
	} else if(a % 2 == 1){
		cout << "odd";g
	}

	/*
	
	same as above statements, here you can use if statement two times

	if(a % 2 == 0){
		cout << "even";
	}
	if(a % 2 == 1){
		cout << "odd";
	}
	 */

	return 0;
}