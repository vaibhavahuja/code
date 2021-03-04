#include <iostream>
using namespace std;

int findMin(int arr[], int total, int n){
  if(total == 0) return 0;
  int k = 1e7;
  for(int i=0;i<n;i++){
    if(arr[i]<=total){
      k = min(k,1+findMin(arr,total-arr[i],n));
    }
  }
  return k;
}



int main(){
  int arr[4] = {1,5,6,9};
  cout<<findMin(arr,11,4);

}
