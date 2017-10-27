#include <iostream>
#include <cmath>

using namespace std;


int f(int n){
	if(n <= 2)
		return 1;
	else 
		return f(n - 1) + f(n - 2);
}

// 1 1 2 3 5 8

int main(){
	int n;

	cin >> n;

	cout << f(n);


	return 0;
}

