#include <iostream>
#include <cmath>

using namespace std;


int my_max(int a, int b){
	if(a > b)
		return a;
	else
		return b;
}


int main(){

	int a, b;

	cin >> a >> b;

	cout << my_max(a, b);


	return 0;
}