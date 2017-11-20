#include <iostream>
#include <vector>

using namespace std;


bool f(int a, int b){
  if(a > b)
    return true;
  else
    return false;
}

int main(){

  int n;
  vector<int> v;

  for(int i = 0; i < 10; i++){
    v.push_back(i);
  }

  v.push_back(100);
  v.push_back(-1);


  sort(v.begin(), v.end(), f);


  vector<int>::iterator it;
  
  for(it = v.begin(); it != v.end(); it++)
    cout << *it << " ";


  return 0;
}