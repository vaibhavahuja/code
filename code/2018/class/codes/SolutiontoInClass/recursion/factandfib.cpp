#include <iostream>
using namespace std;

int fact(int x){
  if(x==1) return 1;
  return x*fact(x-1);
}

int fib(int x){
  if(x<=1) return x;
  return fib(x-1) + fib(x-2);
}

int main(){
  int x;
  cin>>x;
  cout<<"fact is "<<fact(x)<<endl;
  cout<<"fib is "<<fib(x);
}
