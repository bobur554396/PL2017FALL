#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	int A[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			A[i][j] = i * j;
		}
	}


	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout.width(3);
			cout << A[i][j] << " ";
		}
		cout << endl;
	}





	return 0;
}