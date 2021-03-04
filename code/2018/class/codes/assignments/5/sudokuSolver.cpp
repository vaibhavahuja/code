#include <iostream>
using namespace std;


void printMat(int arr[][9], int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

int getNextRow(int arr[][9], int row, int col, int n){
  int t=row;
  int c = col;
  for(int i=t;i<n;i++){
    for(int j=c;j<n;j++){
      if(arr[i][j] == 0){
        return i;
      }
      c = 0;
    }
  }
}

int getNextCol(int arr[][9], int row, int col, int n){
  int t=row;
  int c = col;
  for(int i=t;i<n;i++){
    for(int j=c;j<n;j++){
      if(arr[i][j] == 0){
        return j;
      }
      c = 0;
    }
  }
}

bool canPlace(int arr[][9], int row, int col, int num){
  //to check in row, column, and that box
  for(int i=0;i<9;i++){
    if(arr[i][col] == num) return false;
    if(arr[row][i] == num) return false;
  }

  //checking in that box in which row and column are;
  int a = row/3;
  int b = col/3;
  for(int i=a*3;i<(a+1)*3;i++){
    for(int k=b*3;k<(b+1)*3;k++){
      if(arr[i][k] == num) return false;
    }
  }
  return true;
}

//next zero = getNextRow, getNextCol
bool solveSudoku(int arr[][9],int row, int col){
  if (row>=9 || col>=9){
    return true;
  }

  for(int i=1;i<10;i++){
    int myRow = getNextRow(arr,row,col,9);
    int myCol = getNextCol(arr,row,col,9);
    if(canPlace(arr, myRow, myCol, i)){
      arr[myRow][myCol] = i;
      if(solveSudoku(arr,getNextRow(arr,myRow,myCol,9), getNextCol(arr,myRow,myCol,9))){
        return true;
      }
      arr[myRow][myCol] = 0;
    }
  }
  return false;
}


void printMat6(int arr[][6], int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

int getNextRow6(int arr[][6], int row, int col, int n){
  int t = row;
  int c = col;
  for(int i=t;i<n;i++){
    for(int j=c;j<n;j++){
      if(arr[i][j] == 0){
        return i;
      }
      c = 0;
    }
  }
}
int getNextCol6(int arr[][6], int row, int col, int n){
  int t = row;
  int c = col;
  for(int i=t;i<n;i++){
    for(int j=c;j<n;j++){
      if(arr[i][j] == 0){
        return j;
      }
      c = 0;
    }
  }
}

bool canPlace6(int arr[][6], int row, int col, int num){
  //to check in row, column, and that box
  for(int i=0;i<6;i++){
    if(arr[i][col] == num) return false;
    if(arr[row][i] == num) return false;
  }

  //checking in that box in which row and column are;
  int a = row/2;
  int b = col/3;
  for(int i=a*2;i<(a+1)*2;i++){
    for(int k=b*3;k<(b+1)*3;k++){
      // cout<<arr[i][k]<<" ";
      if(arr[i][k] == num) return false;
    }
    // cout<<endl;
  }
  return true;
}

//next zero = getNextRow, getNextCol
bool solveSudoku6(int arr[][6],int row, int col){
  if (row>=6 || col>=6){
    return true;
  }

  for(int i=1;i<7;i++){
    int myRow = getNextRow6(arr,row,col,6);
    int myCol = getNextCol6(arr,row,col,6);
    if(canPlace6(arr, myRow, myCol, i)){
      arr[myRow][myCol] = i;
      if(solveSudoku6(arr,getNextRow6(arr,myRow,myCol,6), getNextCol6(arr,myRow,myCol,6))){
        return true;
      }
      arr[myRow][myCol] = 0;
    }
  }
  return false;
}





int main(){
  int n;
  cin>>n;


  if(n==9){
    int arr[9][9];
    for(int i=0;i<9;i++){
      for(int j=0;j<9;j++){
        cin>>arr[i][j];
      }
    }
    solveSudoku(arr,0,0);
    printMat(arr,9);
  }
  else if(n==6){
    int arr[6][6];
    for(int i=0;i<6;i++){
      for(int j=0;j<6;j++){
        cin>>arr[i][j];
      }
    }
    solveSudoku6(arr,0,0);
    printMat6(arr,6);
  }
}
