#include <iostream>
using namespace std;

void printPattern(int x){
  for(int i=1;i<=x;i++){
    if(i%2 == 0){
      cout<<1;
      for(int k=1;k<i-1;k++){
        cout<<0;
      }
      cout<<1<<endl;
    }
    else{
      for(int p=1;p<=i;p++){
        cout<<1;
      }
      cout<<endl;
    }
  }
}


int main(){
  int x;
  cin>>x;
  printPattern(x);
}
