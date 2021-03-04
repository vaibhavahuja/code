#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string answer(string m){
  // string m = to_string(n);
  int p = m[m.size() - 1] - '0';
  int swap = -1;
  int swapnxt = -1;
  for(int i = 0; i < m.size() - 1; i++){
    if((m[i] - '0')%2 == 0){
      if((m[i] - '0') < (m[m.size() - 1] - '0') && swap == -1) swap = i;
      swapnxt = i;
    }
  }
  if(swap != -1){
    char p = m[m.size() - 1];
    m[m.size() - 1] = m[swap];
    m[swap] = p;
  }else if(swap == -1 && swapnxt != -1){
    char p = m[m.size() - 1];
    m[m.size() - 1] = m[swapnxt];
    m[swapnxt] = p;
  }else if(swap == -1 && swapnxt == -1){
    m = "-1";
  }
  return m;
}

int main(){
      string n;
      cin>>n;
      cout<<answer(n)<<endl;
}
