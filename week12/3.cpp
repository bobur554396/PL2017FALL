#include <iostream>

using namespace std;

struct Student{
  string fname;
  string lname;
  float p1;
  float p2;
  float p3;
};

int main(){
  int n;
  cin >> n;
  Student s[n];

  for(int i = 0; i < n; i++){
    cin >> s[i].fname >> s[i].lname >> s[i].p1 >> s[i].p2 >> s[i].p3;
  }

  float s1 = 0, s2 = 0, s3 = 0;

  for(int i = 0; i < n; i++){
    s1 += s[i].p1;
    s2 += s[i].p2;
    s3 += s[i].p3;
  }

  cout << s1 / n << s2 / n << s3 / n;







	return 0;
}