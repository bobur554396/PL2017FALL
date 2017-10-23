#include <iostream>
#include <cmath>

using namespace std;


float my_power(int base, int ex){
	float res = 1;

	for(int i = 0; i < abs(ex); i++)
		res *= base;

	if(ex < 0){
		res = 1.0 / res;
	}
	return res;
}

int main(){

	int a, n;
	cin >> a >> n;

	cout << my_power(a, n);

	return 0;
}