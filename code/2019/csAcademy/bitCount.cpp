#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ans(int x){
  int p = 0;
  while(x){
    if(x&1 == 1) p++;
    x = x>>1;
    // p++;
  }
  return p;
}


int main(){
  cout<<ans(23)<<endl;

}
