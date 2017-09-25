#include <iostream>

using namespace std;

int main(){

	int n, x;
	cin >> n;

	int a[n];
	
	bool ok = true;

	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	cin >> x;

	for(int i = 0; i < n; i++){
		if(a[i] == x){
			cout << "YES";
			ok = false;
			break;
		}
	}

	if(ok == true) // if(ok)
		cout << "NO";


	return 0;
}