#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){

  int n;
  vector<int> v;

  for(int i = 0; i < 10; i++){
    v.push_back(i);
  }

  v.push_back(100);
  v.push_back(-1);


  if(find(v.begin(), v.end(), 200) != v.end())
    cout << "yes";
  else 
    cout << "no";


  return 0;
}