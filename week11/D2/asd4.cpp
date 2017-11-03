#include <iostream>

using namespace std;

int f(int n){
	if(n == 0)
		return 0;
	else
		return n + f(n - 1);
}

int main (){

	int n;
	cin >> n;

	cout << f(n);

	// int s = 0;
	// for(int i = 0; i <= n; i++)
	// 	s += i;
	
	return 0;
}



