#include <iostream>
using namespace std;

int fact(int x){
  if (x == 1) return 1;
  return x*fact(x-1);
}

int fib(int x){
  if (x == 1) return 1;
  if (x == 2) return 1;
  return fib(x-1) + fib(x-2);
}

int main(){
  int a;
  cin>>a;
  cout<<"factorial: "<<fact(a)<<endl;
  cout<<"fibonacci number: "<<fib(a)<<endl;
}
