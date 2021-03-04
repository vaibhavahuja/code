#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int D = 4;


bool canPlace(char table[][D], int n, int x, int y) {
    // check row or col
    for (int i = 0; i < n; ++i) {
        if (table[x][i] == 'Q') return false;
        if (table[i][y] == 'Q') return false;
    }

    // check diagonal
    for (int dist = 1; dist < n; ++dist) {
        int prRow = x - dist;
        int prCol = y - dist;
        if (prRow >= 0 && prRow <= n &&
                prCol >= 0 && prCol <= n &&
                table[prRow][prCol] == 'Q') {
            return false;
        }

        int secRow = x - dist;
        int secCol = y + dist;
        if (secRow >= 0 && secRow <= n &&
                secCol >= 0 && secCol <= n &&
                table[secRow][secCol] == 'Q') {
            return false;
        }
    }
    return true;
}


void show(auto table[][D], int D){
  for(int i = 0; i < D; i++){
    for(int j = 0; j < D; j++){
      cout<<table[i][j]<<" ";
    }
    cout<<endl;
  }
}


bool nQueens(char table[][D], int N){
  if(N == D){
    show(table, D);
    // cout<<" /ok "<<endl;
    return true;
  }
  // int q;
  for(int i = 0; i < D; i++){
    if(canPlace(table, D, N, i)){
      // q = i;
      table[N][i] = 'Q';
      if(nQueens(table, N+1)) return  true;
      // return true;
    }
    table[N][i] = '.';
  }
  return false;
}

int main(){
  char table[D][D];
  for(int i = 0; i < D; i++){
    for(int j = 0; j <D; j++){
      table[i][j] = '.';
    }
  }
  // show(table, D);
  nQueens(table, 0);
  // show(table, D);

}
