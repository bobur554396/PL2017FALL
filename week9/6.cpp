#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){

	string s = "hello world";

	string s2 = "asd";

	s.append(s2);
	s.append(s2);
	s.append(s2);
	s.append(s2);
	s.append(s2);

	cout << s;


	return 0;
}