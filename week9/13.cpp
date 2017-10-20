#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){

	stringstream ss;

	string s = "100.123"; 

	ss << s;

	float a;

	ss >> a;

	cout << a << " "<< sqrt(a);





	return 0;
}