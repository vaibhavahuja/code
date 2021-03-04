#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n, int len){
  if(n == len/2 || n == 2) return true;
  return (arr[n-1]==arr[len-n])&&isPalindrome(arr,n-1,len);
}


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  if(isPalindrome(arr,n,n)) cout<<"true";
  else cout<<"false";
}
