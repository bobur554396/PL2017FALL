#include <iostream>

using namespace std;

struct Student{
  string name;
  int age;
  float gpa;
};


int main(){
  
  freopen("input.txt", "r", stdin);

  int n;
  cin >> n;

  Student s[n];
    
  
  for(int i = 0; i < n; i++)
    cin >> s[i].name >> s[i].age >> s[i].gpa;


  s[2].gpa = 3.8;
  s[3].name = "Student44";

  for(int i = 0; i < n; i++)
    cout << s[i].name << " " << s[i].age << " " << s[i].gpa << endl;


  



	return 0;
}