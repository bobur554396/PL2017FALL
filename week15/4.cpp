#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;


int main(){

  map<string, int> m;


  for(int i = 0; i < 10; i++){
    m["Student" + to_string(i)] = i;
  }

  m["Student100"] = 100;
  m["Student59"] = 40;


  string k_maxi;
  int v_maxi = 0;


  map<string, int>::iterator it;
  for(it = m.begin(); it != m.end(); it++){
    string key = (*it).first;
    int value = (*it).second;

    if(value > v_maxi){
      v_maxi = value;
      k_maxi = key;
    }
  }

  cout << k_maxi << " " << v_maxi;




  return 0;
}
