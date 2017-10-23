#include <iostream>

using namespace std;


void hiUser(string s){
	string user_name = s; // local varibale
	cout << "Hello " + user_name; 
} 

string hiUser2(string name){
	return "Hello " + name;
}


int main(){

	cout << "What's your name?\n";
	string s; // local variable

	getline(cin, s);

	//hiUser(s);
	
	string ss = hiUser2(s);
	// float res = sqrt(9);

	cout << ss;

	return 0;
}


