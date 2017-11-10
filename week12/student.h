using namespace std;

struct Student{
  string name;
  int age;
  float gpa;
};


void readStudents(Student *s, int n){
  for(int i = 0; i < n; i++)
    cin >> s[i].name >> s[i].age >> s[i].gpa;
}

void printStudent(Student s){ 
  cout << s.name << " " << s.age << " " << s.gpa << endl;  
}


void printStudents(Student *s, int n){
  for(int i = 0; i < n; i++)
    printStudent(s[i]);
}


void showAllAbove(Student *s, int n, float f){
  for(int i = 0; i < n; i++)
    if(s[i].gpa > f)
      printStudent(s[i]);
}

void sortByGpa(Student *s, int n){
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      if(s[i].gpa < s[j].gpa)
        swap(s[i], s[j]);  
}


// void findStudentByName(Student *s, int n, string name){
//   for(int i = 0; i < n; i++)
//     if(s[i].name == name)
//       printStudent(s[i]);
// }


Student findStudentByName(Student *s, int n, string name){
  for(int i = 0; i < n; i++)
    if(s[i].name == name)
      return s[i];

  return s[0];
}








