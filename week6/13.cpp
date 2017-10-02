#include <iostream>

using namespace std;

int main(){

	string s;

	cin >> s;

	for(int i = 0; i < s.length(); i++){
		int code = (int) s[i];
		if(code >= 48 && code <= 57)
			cout << s[i] << " "; 
	}
	
	return 0;
}