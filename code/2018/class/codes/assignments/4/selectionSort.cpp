// cant understand where this code is wrong. to ask someone.

#include <iostream>
using namespace std;

int minIndex(int arr[], int a, int n){
  if(a==n) return a;
  int k = minIndex(arr,a+1,n);
  if(arr[a]<arr[k]) return a;
  else return k;
}

void selectionSort(int arr[], int n){
  for(int i=0;i<n;i++){
    swap(arr[i], arr[minIndex(arr,i,n)]);
  }
}

void display(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  selectionSort(arr,n);
  display(arr,n);

}
