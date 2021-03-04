#include <iostream>
using namespace std;

int nsteps(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  if(n==2) return 1;
  if(n==3) return 1;
  return min(min(nsteps(n-1), nsteps(n-2)),nsteps(n-3)) + 1;
}

int main(){
  int n;
  cin>>n;
  cout<<nsteps(n)<<endl;
}
