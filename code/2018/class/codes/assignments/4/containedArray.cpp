#include <iostream>
using namespace std;

bool contained(int arr[], int n, int m){
  if(n <= 0) return false;
  if(arr[n-1] == m) return true;
  contained(arr,n-1,m);
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

  if(contained(arr,n,m)) cout<<"true";
  else cout<<"false";
}
