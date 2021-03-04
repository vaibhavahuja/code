#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool can(int arr2[][100], int arr[][100], int n, int qw){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < qw; j++){
      int m = 0;
      for(int k = 0; k < n; k++){
        m = m||arr2[k][j];
      }
      for(int l = 0; l < qw; l++){
        m = m||arr2[i][l];
      }
      if(m != arr[i][j]) return false;
    }
  }
  return true;
}

void printReal(int arr[][100], int n, int m){
  int arr2[n][100];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      arr2[i][j] = 1;
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(arr[i][j] == 0){
        for(int k = 0; k < n; k++){
          arr2[k][j] = 0;
        }
        for(int l = 0; l < m; l++){
          arr2[i][l] = 0;
        }
      }
    }
  }
  if(can(arr2, arr, n, m)){
    cout<<"YES"<<endl;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        cout<<arr2[i][j]<<" ";
      }
      cout<<endl;
    }
  }else cout<<"NO"<<endl;

}

int main(){
  int n, m;
  cin>>n>>m;

  int arr[n][100];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin>>arr[i][j];
    }
  }
  printReal(arr, n, m);

}
