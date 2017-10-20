#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){


	string s;
	getline(cin, s);

	for(int i = 1; i < s.size(); i++){
		if(s[i - 1] == s[i])
			cout << s[i] << " ";
	}



	return 0;
}