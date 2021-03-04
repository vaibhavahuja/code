#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int answer(int a, int b){
  for(int i = a; i <= b; i++){
    if(i%a == 0 && b%i == 0) return i;
  }
  return -1;
}


int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b;
    cin>>a>>b;
    cout<<answer(a, b)<<endl;
  }
}
