//wrong answer
#include <iostream>
using namespace std;


int main(){
  int x;
  cin>>x;
  int p = x;
  if(p<0) cout<<p<<endl;
  while(p>0){
    cout<<x<<endl;
    cin>>x;
    p += x;
  }

}
