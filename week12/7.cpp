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


  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      if(s[i].gpa < s[j].gpa)
        swap(s[i], s[j]);
    


  for(int i = 0; i < n; i++)
    cout << s[i].name << " " << s[i].age << " " << s[i].gpa << endl;


  



	return 0;
}