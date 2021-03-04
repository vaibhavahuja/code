#include <iostream>
#include <queue>
using namespace std;



const int D = 10;

void showMatrix(int N, int M, int arr[][D]){
  for(int i=0;i<N;i++){
    for(int j = 0; j<M;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

bool canPlace(int x, int y, int N, int M){
  return (x>=0 && x<=N && y>=0 && y<=M);
}

int counter = 0;

int rowDir[8] = {+2,+2,-2,-2,+1,-1,+1,-1};
int colDir[8] = {+1,-1,+1,-1,+2,+2,-2,-2};

const int inf = 1e3;
int minPath(int N, int M, int x1, int y1, int x2, int y2){
  int arr[N][M];
  //start
  for(int i=0;i<N;i++){
    for(int j = 0; j<M;j++){
      arr[i][j] = inf;
    }
  }
  //end
  arr[x1][y1] = 1;
  //destination is x2,y2
  queue<int> row;
  queue<int> col;
  row.push(x1);
  col.push(y1);
  while(!row.empty()){
    int curRow = row.front();
    int curCol = col.front();
    row.pop();
    col.pop();

    for(int i = 0; i < 8; i++){
      if(canPlace(curRow+rowDir[i], curCol+colDir[i], N, M)){
        if(arr[curRow+rowDir[i]][curCol+colDir[i]] > arr[curRow][curCol]){
          arr[curRow+rowDir[i]][curCol+colDir[i]] = arr[curRow][curCol] + 1;
          row.push(curRow+rowDir[i]);
          col.push(curCol+colDir[i]);
        }
      }
    }
  }

  return arr[x2][y2];
}


int main(){

   cout<<minPath(5, 5, 0, 0,3,3)<<endl;

}
