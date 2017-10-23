#include <iostream>

using namespace std;


int sum(int a, int b){
	int res = a + b;// local variable for sum function
	return res;
}


int main(){

	int x, y;

	cin >> x >> y;

	int res = sum(x, y); // local variable for main function

	cout << res;

	return 0;
}