#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int arr[3][3];
  int p = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cin>>arr[i][j];
      p += arr[i][j];
    }
  }
  int m = p/2;
  // int x, y, z;
  arr[0][0] = m - arr[0][1] - arr[0][2];
  arr[1][1] = m - arr[1][0] - arr[1][2];
  arr[2][2] = m - arr[2][0] - arr[2][1];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }






}
