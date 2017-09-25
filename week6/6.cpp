#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++)
		cin >> a[i];

	/* 
		4
	  1 2 100 -2

	*/
	int maxi = -100000;
	for(int i = 0; i < n; i++){
		if(a[i] > maxi)
			maxi = a[i];
	}

	cout << maxi;



	return 0;
}