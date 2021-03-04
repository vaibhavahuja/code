//do it with memoization
#include <iostream>
using namespace std;


int reach1(int n){
  if(n<1) return -1;
  if(n==3) return 1;
  if(n==2) return 1;
  if(n==1) return 0;
  int a = n;
  if(n%3 == 0){
    a = n/3;
  }
  else if(n%2 == 0){
    a = n/2;
  }
  else{
    a = n-1;
  }
  int p = 1+reach1(n-1);
  int k = 1+reach1(a);
  return min(p,k);
}


int main(){
  int n;
  cin>>n;
  cout<<reach1(n);

}
