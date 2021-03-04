#include <iostream>
using namespace std;

int nSteps(int x){
  if(x<=0) return 1e6;
  if(x==0) return 0;
  if(x==1) return 1;
  if(x==2) return 1;
  if(x==3) return 1;
  return 1+min(nSteps(x-1),min(nSteps(x-2),nSteps(x-3)));
}


int main(){
  int x;
  cin>>x;
  while(x--){
    int p;
    cin>>p;
    cout<<nSteps(p)<<endl;
  }
}
