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
	bool ok = true;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(A[i][j] != A[j][i]){
				ok = false;
				break;
			}
		}
		if(ok == false) // if(!ok)
			break
	}

	if(ok)// if(ok == true)
		cout << "YES";
	else 
		cout << "NO";




	return 0;
}