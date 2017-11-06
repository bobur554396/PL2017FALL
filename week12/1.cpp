#include <iostream>

using namespace std;

int square(int a){
	return a * a;
}

void square(int *a){
	*a = *a * *a;
}


void square(int &a){
	a = a * a;
}

int main(){

	int n;
	cin >> n;

	square(n);
	cout << n;




	return 0;
}