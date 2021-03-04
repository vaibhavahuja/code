#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  long long int x, y, z;
  cin>>x>>y>>z;

  long long int a, b, c;
  cin>>a>>b>>c;

  a -= x;
  if(a<0){
    cout<<"NO"<<endl;
    return 0;
  }
  if(y > a + b){
    cout<<"NO"<<endl;
    return 0;
  }
  if(z > a + b + c - y){
    cout<<"NO"<<endl;
    return 0;
  }
  cout<<"YES"<<endl;
}
