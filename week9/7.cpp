#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){

	string s = "hello world";

	string s2 = "asd";

	s.insert(s.size(), s2);


	cout << s;


	return 0;
}