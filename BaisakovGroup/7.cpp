#include <iostream>

using namespace std;

int main(){

	int n, m;

	cin >> n >> m;

	int A[n][m], k = 0;

	for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			for(int j = 0; j < m; j++)
				A[i][j] = k++;
		} else {
			for(int j = m - 1; j >= 0; j--)
				A[i][j] = k++;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout.width(3);
			cout << A[i][j] << " "; 
		}
		cout << endl;
	}




	return 0;
}