#include <iostream>

using namespace std;

struct Student{
  string name;
  int age;
  float gpa;
};


int main(){
  
  Student s;
  s.name = "User 1";
  s.age = 18;
  s.gpa = 4.0; 

  cout << s.name << " " << s.age << " " << s.gpa;

	return 0;
}