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

	int maxi = A[0][0];
	int mini = A[0][0];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(A[i][j] > maxi)
				maxi = A[i][j];
			if(A[i][j] < mini)
				mini = A[i][j];
		}
	}

	cout << maxi << endl << mini;


	





	return 0;
}