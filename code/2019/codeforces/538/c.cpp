#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

unsigned long long int get(unsigned long long int a, unsigned long long int b){
  unsigned long long int i = b;
  unsigned long long int q = 0;
  while(b <= a){
    q += (unsigned long long int)a/b;
    b *= i;
  }
  return q;
}

unsigned long long int answer(unsigned long long int a, unsigned long long int b){
  unsigned long long int m = b;
  for(unsigned long long int i = 2; i <= sqrt(b); i++){
    if(b % i == 0){
      m = i;
      break;
    }
  }
  unsigned long long int q = b/m;
  unsigned long long int w = max(q, m);
  unsigned long long int u = min(q, m);
  unsigned long long int p = sqrt(b);
  if(p*p == b){
    w = p;
    u = p;
  }
  cout<<w<<" "<<u<<endl;
  if(w == u){
    return (get(a, u))%2==0?get(a,u)/2:(get(a,u)+1)/2;
  }else{
    return get(a, w);
  }
}

int main(){
  unsigned long long int a, b;
  cin>>a>>b;
  cout<<answer(a, b)<<endl;
  // cout<<get(5,5)<<endl;
}
