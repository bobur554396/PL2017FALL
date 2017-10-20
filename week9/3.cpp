#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){

	string s = "hello world";


	// for(int i = 0; i < s.size(); i++){
	// 	cout << s[i] << "--";
	// }
	
	for(int i = 0; i < s.size(); i++){
		cout << s.at(i) << "--";
	}

	return 0;
}