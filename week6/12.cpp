#include <iostream>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++)
		cin >> a[i];

	cout << "Number = " << n << endl;
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";

	
	return 0;
}