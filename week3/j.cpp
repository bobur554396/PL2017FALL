#include <iostream>
#include <cmath>

using namespace std;


int main(){

	float a;
	cin >> a;

	if(a >= 90 && a <= 100){
		cout << "A";
	} else if(a >= 80 && a < 90){
		cout << "B";
	} else {
		cout << "C";
	}

	return 0;
}