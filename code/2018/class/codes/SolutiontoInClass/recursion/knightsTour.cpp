#include <iostream>
using namespace std;


const int D = 20;

void printMatrix(int arr[][D], int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<"   ";
    }
    cout<<endl;
  }
}

bool canPlace(int arr[][D], int row, int col, int n){
  if(!arr[row][col] == 0) return false;
  if(row>=n || col >=n) return false;
  if(col<0 || row<0) return false;
  return true;
}

int counter = 1;

int rowDir[9] = {0,+2,+2,-2,-2,+1,-1,+1,-1};
int colDir[9] = {0,+1,-1,+1,-1,+2,+2,-2,-2};

bool knightsTour(int arr[][D], int row, int col, int n){
  if(counter == n*n+1) return true;
  for(int i=0;i<9;i++){//error is somewhere here
    if (canPlace(arr, row+rowDir[i], col+colDir[i], n)){
      arr[row+rowDir[i]][col+colDir[i]] = counter;
      counter++;
      if(knightsTour(arr,row+rowDir[i], col+colDir[i], n)){
        return true;
      }
      arr[row+rowDir[i]][col+colDir[i]] = 0;
      counter--;
    }
  }
  return false;
}

int main(){
  int n;
  cin>>n;
  int arr[n][20] = {0};
  if(knightsTour(arr, 0, 0, n)){
    printMatrix(arr,n);
  }
  else{
    cout<<"not possible"<<endl;
  }
}
