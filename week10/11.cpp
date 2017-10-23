#include <iostream>
#include <cmath>

using namespace std;


char toUpper(char c){
	int code = (int) c;
	if(code >= 97 && code <= 122)
		code -= 32;

	return (char)code;
}

char toUpper2(char c){
	if(c >= 'a' && c <= 'z')
		c -= 32;

	return c;
}

int main(){

	char c;
	cin >> c;

	cout << toUpper(c);

	return 0;
}

