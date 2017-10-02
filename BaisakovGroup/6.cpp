#include <iostream>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);

	int n;

	cin >> n;

	int A[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> A[i][j];
		}
	}


	for(int i = 0; i < n; i++){
		int maxi = A[i][0];
		for(int j = 0; j < n; j++){
			if(A[i][j] > maxi)
				maxi = A[i][j];
		}
		cout << maxi << endl;g
	}




	return 0;
}