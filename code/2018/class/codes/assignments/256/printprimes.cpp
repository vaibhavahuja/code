#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
  int m = sqrt(x);
  for(int i=2;i<=m;i++){
    if(x%i == 0){
      return false;
    }
  }
  return true;
}

void printPrime(int x){
  cout<<2;
  for(int i=3;i<=x;i++){
    if(isPrime(i)) cout<<", "<<i;
  }
}


int main(){
  int n;
  cin>>n;
  printPrime(n);
}
