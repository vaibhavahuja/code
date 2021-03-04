#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<long long int>




int main(){
  long long int n;
  cin>>n;

  char arr[n][n];

  for(long long int i = 0; i < n; i++){
    for(long long int j = 0; j < n; j++){
      cin>>arr[i][j];
    }
  }

  long long int ans = 0;
  for(long long int i = 1; i < n-1; i++){
    for(long long int j = 1; j < n-1; j++){
      if(arr[i][j] == 'X' && arr[i-1][j-1] == 'X' && arr[i-1][j+1] == 'X' && arr[i+1][j+1] == 'X' && arr[i+1][j-1] == 'X') ans++;

    }
  }

  if(n < 3) cout<<0<<endl;
  else cout<<ans<<endl;
}
