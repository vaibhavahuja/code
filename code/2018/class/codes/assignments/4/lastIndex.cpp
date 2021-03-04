#include <iostream>
using namespace std;

void lastIndex(int arr[], int n, int m){
  if(n<0){
    cout<<-1<<endl;
    return;
  };
  if(arr[n] == m){
    cout<<n<<endl;
    return;
  }
  return lastIndex(arr,n-1,m);

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
  lastIndex(arr,n,m);

}
