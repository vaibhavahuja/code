#include <iostream>
using namespace std;

int main(){
  int x = 4;
  int m;
  cin>>m;
  int q = m;
  while(x--){
    cin>>m;
    if(m>q){
      q = m;
    }
  }
  cout<<q<<endl;
}
