#include <iostream>

using namespace std;

int main(){

	//int arr[3];
	//float arr[10];
	//bool arr[10];

	//int arr[3] = {1, 100, -5};

	int arr[5] = {1, 2, 3, 55, -102};
	
	arr[1] = arr[2] + arr[4];

	for(int i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	arr[2] = 10;

	for(int i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
	

	return 0;
}