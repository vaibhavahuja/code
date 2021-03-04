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


int main(){
  int x;
  cin>>x;
  if(isPrime(x)){
    cout<<"Prime"<<endl;
  }
  else cout<<"Not Prime"<<endl;
}
