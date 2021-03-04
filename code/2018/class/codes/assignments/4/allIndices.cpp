#include <iostream>
using namespace std;

int i=0;
void allIndices(int arr[], int n, int x, int arr2[]){
  if(n==0) return;
  if(arr[n-1] == x){
    arr2[i] = n-1;
    i++;
  }
  allIndices(arr,n-1,x, arr2);
}

void displayArr(int arr[], int n){
  for(int i=n-1;i>=0;i--){
    if(arr[i] != -1)cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  //enter a number n
  int n;
  cin>>n;

  int arr[n];
  int arr2[n];
  for(int u=0;u<n;u++){
    cin>>arr[u];
  }
  std::fill(arr2, arr2 + n, -1);

  int m;
  cin>>m;

  allIndices(arr,n,m,arr2);
  displayArr(arr2,n);
}
