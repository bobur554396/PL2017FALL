#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a, b;

	cin >> a >> b;

	bool isPrime;

	for(int i = a; i <= b; i++){
		
		isPrime = true;

		for(int j = 2; j < i; j++){
			if(i % j == 0){
				isPrime = false;
				break;
			}
		}
		if(isPrime == true)
			cout << i << " ";

	}



	return 0;
}
