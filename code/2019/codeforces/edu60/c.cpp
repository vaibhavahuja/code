#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vp vector<pair<int, int>>
#define U make_pair(0, 1)
#define D make_pair(0, -1)
#define R make_pair(1, 0)
#define L make_pair(-1, 0)

void show(int arr[][100], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

int answer(int arr[][100], int x1, int y1, int x2, int y2, vp a){
  for(int i = 0; i < 100; i++){
    for(int j = 0; j < 100; j++){
      arr[i][j] = 1e3;
    }
  }
  arr[x1][y1] = 0;
  int k = 0;
  int xdir, ydir;

  // if(i + xdir <= x2 && j + ydir >= y1  && i + xdir >= x1 && j + ydir >= y1){
  //   arr[i + xdir][j + ydir] = min(1 + arr[i + xdir][j + ydir], arr[i][j]);
  // }
  // int k = 0;
  for(int i = y1; i <= y2; i++){
    ydir = a[k%a.size()].first;
    xdir = a[k%a.size()].second;
    k++;
    for(int j = x1; j <=  x2; j++){
      if(i + xdir <= y2 && j + ydir >= x1  && i + xdir >= y1 && j + ydir >= x1){
        arr[i][j] = min(1 + arr[i + xdir][j + ydir], arr[i][j]);
      }
      if(i + xdir <= y2 && j + ydir - 1 >= x1  && i + xdir >= y1 && j + ydir - 1 >= x1){
        arr[i][j] = min(1 + arr[i + xdir][j + ydir - 1], arr[i][j]);
      }
      if(i + xdir - 1 <= y2 && j + ydir >= x1  && i + xdir -1>= y1 && j + ydir - 1 >= x1){
        arr[i][j] = min(1 + arr[i + xdir - 1][j + ydir], arr[i][j]);
      }

      if(i + xdir + 1<= y2 && j + ydir >= x1  && i + xdir + 1 >= y1 && j + ydir >= x1){
        arr[i][j] = min(1 + arr[i + xdir + 1][j + ydir], arr[i][j]);
      }

      if(i + xdir <= y2 && j + ydir + 1 >= x1  && i + xdir >= y1 && j + ydir + 1>= x1){
        arr[i][j] = min(1 + arr[i + xdir][j + ydir + 1], arr[i][j]);
      }

    }
  }

  show(arr, 10);
}

int main(){
  // vp a = {D, D, D};
  // vp a = {D, U, U};
  vp a= {U, D, D};
  // vp a = {U, U, U};
  int arr[100][100];
  answer(arr, 0, 0, 0, 3, a);
  // cout<<answer(a, 0, 0, 0, 0, 3)<<endl;
}
