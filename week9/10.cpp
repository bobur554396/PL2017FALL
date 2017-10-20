#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){

	string s = "hello world";

	if(s.find("@") == string::npos){
		cout << "no";
	} else {
		cout << s.find("@");
	}


	return 0;
}