#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fact(int x){
  if(x<=0) return 1;
  return x*fact(x-1);
}

int fib(int x){
  if(x<=2) return 1;
  return fib(x-1) + fib(x-2);
}

int nSteps(int x){
  if(x >= 1 && x <=3) return 1;
  return min(min(1 + nSteps(x-1), 1 + nSteps(x-2)),1 + nSteps(x-3));
}

int main(){
  cout<<nSteps(10);

}
