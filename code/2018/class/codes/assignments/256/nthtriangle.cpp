#include <iostream>
using namespace std;

int triangle(int x){
  if(x == 1) return 1;
  return x+triangle(x-1);
}


int main(){
  int x;
  cin>>x;
  cout<<triangle(x)<<endl;

}
