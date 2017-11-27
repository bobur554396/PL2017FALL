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
  set<int> s;

  int n;
  while(cin >> n){
    s.insert(n);
  }

  cout << s.size();
  // string s;
  // getline(cin, s);

  // vector<int> v = split(s);


  // for(int i = 0; i < v.size(); i++)
  //   cout << v[i] << " ";

  




  return 0;
}
