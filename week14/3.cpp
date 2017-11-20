#include <iostream>
#include <vector>

using namespace std;


int main(){

  int n;
  cin >> n;
  vector<int> v;

  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    v.push_back(a);
  }

  v.push_back(100);
  v.push_back(-1);


  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << v[v.size() - 1];




  return 0;
}