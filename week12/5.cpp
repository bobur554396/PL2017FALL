#include <iostream>

using namespace std;

struct Student{
  string name;
  int age;
  float gpa;
};


int main(){
  Student s;

  cin >> s.name >> s.age >> s.gpa;


  cout << "\n" << s.name << " " << s.age << " " << s.gpa;

	return 0;
}