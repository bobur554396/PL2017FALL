#include <iostream>
#include <cmath>

using namespace std;



int f(int n){
	int res = 1;
	for(int i = 1; i <= n; i++)
		res *= i;

	return res;
}


int main(){

	// 3! = 1 * 2 * 3;
	int n;

	cin >> n;
	int r = f(n);

	cout << r;

	return 0;
}