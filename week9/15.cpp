#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>


using namespace std;


int main(){


	string s;
	
	cin >> s;

	int left = 0;
	int right = s.size() - 1;

	while(left < right){
		if(s[left] != s[right]){
			cout <<  "no";
			return 0;
		}
		left++;
		right--;
	} 

	cout << "yes";


	return 0;
}