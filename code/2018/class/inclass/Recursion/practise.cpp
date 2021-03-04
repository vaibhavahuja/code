#include <iostream>
using namespace std;

void printInc(int n){
  //prints n integers in increasing order
  //5 -> 1_2_3_4_5_

  if(n<=0) return;
  printInc(n-1);
  cout<<n<<"_";
}

void printDec(int n){
  //will do the same thing as above just decreasing order
  if(n<=0) return;
  cout<<n<<"_";
  printDec(n-1);
}

int power(int n, int x){
  //n^x;
  if(x==0) return 1;
  return n*power(n,x-1);
}

void displayArr(int arr[], int n){
  if(n<=0){
    return;
  }
  displayArr(arr, n-1);
  cout<<arr[n-1]<<" ";
}

int maxElementArr(int arr[], int n){
  if(n==1) return arr[0];
  if(n==2) return max(arr[0], arr[1]);
  return max(maxElementArr(arr,n-2), arr[n-1]);

}

int searchArr(int arr[], int n, int x){
  if(n<=0) return -1;
  if(arr[n-1] == x) return n-1;
  return searchArr(arr,n-1,x);
}
//
// TO DO
//done in assignment 4;
// bubble sort --> done
// check if sorted --> done
// sum of array --> done


int binarySearch(int arr[], int low, int high, int m){
  int mid = (low+high)/2;
  if(low>high) return -1;
  if(arr[mid] == m){
    return mid;
  }
  else if(arr[mid] > m){
    binarySearch(arr,low,mid,m);
  }
  else if(arr[mid] < m){
    binarySearch(arr,mid,high,m);
  }

}


int main(){
  //
  // printInc(5);
  // printDec(5);
  //
  // cout<<power(5,3)<<endl;
  //
  // int arr[3] = {122,320,1232};
  // displayArr(arr,5);
  // cout<<maxElementArr(arr,3)<<endl;

  // int arr[5] = {1,2,3,4,5};
  // cout<<searchArr(arr,5,11);
  // cout<<binarySearch(arr,0,5,5)<<endl;


}
