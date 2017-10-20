#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){

	string s = "hello @world@";
	string q = "@";
	int a = 0;

	while(s.find(q) != string::npos) {
		int p = s.find(q);
		cout << p << " ";
		s = s.substr(p+q.size(), s.size());
	}


	return 0;
}