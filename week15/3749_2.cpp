#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;


vector<int> split(string line){
  vector<int> res;
  stringstream ss;
  ss << line;
  int x;
  while(ss >> x) {
    res.push_back(x);
  }
  return res;
}


int main(){

  freopen("input.txt", "r", stdin);
  
  map<int, int> m;

  int n;
  while(cin >> n){
    m[n]++;
  }

  cout << m.size();


  // map<int, int>::iterator it;


  // for(it = m.begin(); it != m.end(); it++)
  //   cout << (*it).first << "--->" << (*it).second << "\n";


  




  return 0;
}
