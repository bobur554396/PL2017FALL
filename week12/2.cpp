#include <iostream>

using namespace std;


void squareElements(int *arr, int n){
  for(int i = 0; i < n; i++)
    arr[i] = arr[i] * arr[i];
}


int main(){

  int a[4] = {1, 2, 3, 4};

  squareElements(a, 4);

  for(int i = 0; i < 4; i++)
    cout << a[i] << " ";



	return 0;
}