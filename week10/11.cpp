#include <iostream>
#include <cmath>

using namespace std;


char toUpper(char c){
	int code = (int) c;
	if(code >= 97 && code <= 122)
		code -= 32;

	return (char)code;
}


int main(){

	char c;
	cin >> c;

	cout << toUpper(c);

	return 0;
}