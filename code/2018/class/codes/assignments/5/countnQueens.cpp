#include <iostream>
using namespace std;

const int D = 20;
int count = 0;
void clearMatrix(int arr[][D], int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr[i][j] = 0;
    }
  }
}


void printMat(int arr[][D], int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

bool canPlace(int arr[][D], int row, int col, int n){
  for(int i=0;i<n;i++){ //print column
    // cout<<arr[i][col]<<" ";
    if(arr[i][col]==1) return false;
  }
  // cout<<endl;
  for(int j=0;j<n;j++){ //print row
    if(arr[row][j] == 1) return false;
    // cout<<arr[row ][j]<<" ";
  }
  // cout<<endl;
  int i=row, j=col;
  while(j<n && i<n){
    // cout<<arr[i][j]<<" ";
    if(arr[i][j] == 1) return false;
    j++;
    i++;
  }
  // cout<<endl;
  int p=row, q=col;
  while(q>=0 && p>=0){
    // cout<<arr[p][q]<<" ";
    if(arr[p][q] == 1) return false;
    p--;
    q--;
  }
  // cout<<endl;
  int ip = row, iq = col;
  while(iq>=0 && ip<n){
    // cout<<arr[ip][iq]<<" ";
    if(arr[ip][iq] == 1) return false;
    ip++;
    iq--;
  }

  // cout<<endl;
  int jp = row, jq = col;
  while(jq<n && jp>=0){
    // cout<<arr[jp][jq]<<" ";
    if(arr[jp][jq] == 1) return false;
    jp--;
    jq++;
  }
  return true;
}
bool nQueen(int arr[][D], int col, int n){
  if (col>=n){
    return true;
  }
  for(int i=0;i<n;i++){
    if(canPlace(arr,i,col,n)){
      arr[i][col] = 1;
      if(nQueen(arr,col+1,n)){
        count++;
      }
      arr[i][col] = 0;
    }
  }
  return false;
}



int main(){
  int n;
  cin>>n;

  int arr[n][20] = {0};
  nQueen(arr,0,n);
  cout<<count<<endl;

}
