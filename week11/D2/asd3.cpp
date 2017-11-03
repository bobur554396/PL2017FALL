#include <iostream>

using namespace std;


void help(){
	cout << "Enter q for exit\n";
}

int execute(int fn, char op, int sn){
	if(op == '+')
		return fn + sn;
	if(op == '-')
		return fn - sn;
	if(op == '*')
		return fn * sn;	
	if(op == '/')
		return fn / sn;
}

int main (){
	int fn, sn;
	char op;

	char cmd;
	help();	
	cin >> cmd;

	while(cmd != 'q'){
		cout << "Enter: first number, operation, second number\n";
		cin >> fn >> op >> sn;

		cout << execute(fn, op, sn) << endl;

		help();
		cin >> cmd;
	}



	
	return 0;
}



