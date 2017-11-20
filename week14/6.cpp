#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;


int main(){

  int n;
  set<int> s;

  for(int i = 0; i < 10; i++)
    s.insert(i);
  

  s.insert(20);
  s.insert(2);
  s.insert(2);
  s.insert(11);

  int q = 2;


  for(set<int>::iterator it = s.begin(); it != s.end(); it++)
    cout << *it << " ";


  return 0;
}