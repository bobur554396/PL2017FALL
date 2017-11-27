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



  int v_maxi = 0;
  pair<string, int> ans;

  map<string, int>::iterator it;
  for(it = m.begin(); it != m.end(); it++){
    int value = (*it).second;

    if(value > v_maxi){
      ans = (*it);
      v_maxi = value;
    }
  }

  cout << ans.first << " " << ans.second;




  return 0;
}
