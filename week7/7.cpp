#include <iostream>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);

	int n, m;

	cin >> n >> m;

	int A[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	


	return 0;
}