#include <iostream>

using namespace std;

int main(){

	int n, x;
	cin >> n;

	int a[n];
	
	bool ok = false;

	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	cin >> x;

	for(int i = 0; i < n; i++){
		if(a[i] == x){
			cout << "YES";
			ok = true;
			break;
		}
	}

	if(ok == false) // if(!ok)
		cout << "NO";


	return 0;
}