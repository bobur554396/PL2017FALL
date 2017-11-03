#include <iostream>

using namespace std;

int main (){
	string s;

	cin >> s;

	int left = 0, right = s.size() - 1;


	for(int i = 0; i < s.size() / 2; i++)
		if(s[i] == s[s.size() - 1 - i])
			cout << s[i]
		
		
	while(left <= right){
		if(s[left] == s[right])
			cout << s[left] << " ";
		left++;
		right--;
	}






	
	return 0;

}