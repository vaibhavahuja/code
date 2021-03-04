#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

int answer(string a, string b, int n, int m){
  if(n < 0 || m < 0) return abs(m-n);
  if(a[n] == b[m]) return answer(a, b, n-1, m-1);
  return min(min(1 + answer(a, b, n-1, m-1), 1 + answer(a, b, n-1, m)), 1 + answer(a, b, n, m-1));
}

int dpAnswer(string a, string b, int n, int m){
  int arr[n+1][m+1];
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= m; j++){
      if(i == 0) arr[i][j] = j;
      else if(j == 0) arr[i][j] = i;
      else arr[i][j] = 1e6;
    }
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      if(a[i-1] == b[j-1]){
        arr[i][j] = arr[i-1][j-1];
      }else{
        arr[i][j] = min(arr[i][j], 1 + arr[i-1][j-1]);
        arr[i][j] = min(arr[i][j], 1 + arr[i-1][j]);
        arr[i][j] = min(arr[i][j], 1 + arr[i][j-1]);
      }
    }
  }

  // for(int i = 0; i <= n; i++){
  //   for(int j = 0; j <= m; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  cout<<arr[n][m]<<endl;

}

int main(){
  int t;
  cin>>t;
  while(t--){
    int q, qq;
    cin>>q>>qq;

    string a, b;
    cin>>a>>b;
    // cout<<answer(a, b, a.length()-1, b.length()-1)<<endl;
    dpAnswer(a, b, a.length(), b.length());
  }

}
