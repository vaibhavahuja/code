#include <iostream>
using namespace std;

int firstIndex(int arr[], int n, int m){
  static int t = -1;
  if(n==0){
    if(arr[n] == m) return 0;
    else return t;
  }
  if(arr[n] == m){
    t = n;
  }
  return firstIndex(arr,n-1,m);
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int m;
  cin>>m;
  cout<<firstIndex(arr,n,m);
}
