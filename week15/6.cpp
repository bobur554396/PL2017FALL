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

  // "2 3 4 5 6 6 7"

  string s;
  getline(cin, s);

  vector<int> v = split(s);

  




  return 0;
}
