#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){

  map<string, int> m;

  m["Student1"] = 2;
  m["Student2"] = 3;
  m["Student3"] = 4;



  map<string, int>::iterator it;

  cout << m.size() << "\n";

  
  for(it = m.begin(); it != m.end(); it++){
    cout << (*it).first << " " << (*it).second <<"\n";
  }




  return 0;
}
