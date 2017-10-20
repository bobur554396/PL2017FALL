#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){

	string s = "hello @world@";
	


	string s2 = s.substr(2, s.size());

	cout << s << endl << s2 << endl;


	return 0;
}