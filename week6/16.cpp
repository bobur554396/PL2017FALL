#include <iostream>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);

	int n;
	cin >> n;
	
	int a[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	// for(int i = 0; i < n / 2; i++){
	// 	swap(a[i], a[n - 1 - i]);
	// }

	reverse(a, a + n);


	for(int i = 0; i < n; i++)
		cout << a[i] << " ";


	return 0;
}