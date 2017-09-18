#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;

	cin >> n;

	int t1 = 0, t2 = 1, next;

	while(n > 0){

		next = t1 + t2;
		t1 = t2;
		t2 = next;

		cout << next << " ";
		n--;

	}


	return 0;
}
