#include <iostream>
using namespace std;

bool isPalindrome(string arr, int n, int len){
  if(n == len/2 || n == 2) return true;
  return (arr[n-1]==arr[len-n])&&isPalindrome(arr,n-1,len);
}


int main(){
  string arr;

  cin>>arr;
  int n = arr.length();

  if(isPalindrome(arr,n,n)) cout<<"true";
  else cout<<"false";
}
