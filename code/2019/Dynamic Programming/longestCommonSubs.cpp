#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


int main(){
  // int t;
  // cin>>t;
  // while(t--){
  //   int q, w;
  //   cin>>q>>w;
    string a, b;
    cin>>a>>b;
    int n = a.length(), m = b.length();

    int arr[n+1][m+1];
    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= m; j++){
        arr[i][j]= 0;
      }
    }
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){
        if(a[i-1] == b[j-1]){
          arr[i][j] = 1 + arr[i-1][j-1];
        }else{
          arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
        }
      }
    }
    cout<<arr[n][m]<<endl;
  // }
}
