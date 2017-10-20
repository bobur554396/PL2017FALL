#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){

	string s = "hello world";

	string s2 = "";

	for(int i = 0; i < s.size(); i++){
		if(i % 2 == 0)
			s2 += s[i];
	}

	cout << s << endl << s2;



	return 0;
}