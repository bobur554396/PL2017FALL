#include <iostream>
#include "student.h"

int main(){
  
  freopen("input.txt", "r", stdin);

  int n;
  cin >> n;

  Student s[n];

  readStudents(s, n);
  

  // Student q = findStudentByName(s, n, "Stude");

  // printStudent(q);


  float f;
  cin >> f; 
  
  showAllAbove(s, n, f); 

  // sortByGpa(s, n);    


  // printStudents(s, n);


  
	return 0;
}