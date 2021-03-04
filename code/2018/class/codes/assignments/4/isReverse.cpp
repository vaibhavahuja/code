#include <iostream>
using namespace std;

bool isPalindrome(string arr, int n, int len){
  if(n == len/2 || n == 2) return true;
  return (arr[n-1]==arr[len-n])&&isPalindrome(arr,n-1,len);
}

bool isReverse(string s1, string s2){
  string s3 = s1+s2;
  return isPalindrome(s3, s3.length(), s3.length());
}


int main(){
  string s1;
  string s2;
  cin>>s1;
  cin>>s2;

  if(isReverse(s1,s2)) cout<<"true";
  else cout<<"false";
}
