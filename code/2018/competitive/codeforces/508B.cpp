#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>

void show(vi a){
  int d = 0;
  while(d < a.size()){
    cout<<a[d]<<" ";
    d++;
  }
  cout<<endl;
}


int gcd(int a, int b)
{
    if (a == 0 || b == 0)
       return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

void check(int n){
  vi a, b;
  int suma = 0, sumb = 0;
  for(int i = 1; i <= n; i++){
    if(i % 2 == 0) {
      a.push_back(i);
      suma+=i;
    }
    else{
      b.push_back(i);
      sumb+=i;
    }
  }
  if(gcd(suma, sumb) > 1){
    cout<<"Yes"<<endl;
    cout<<a.size()<<" ";
    show(a);
    cout<<b.size()<<" ";
    show(b);
  }else{
    cout<<"No"<<endl;
  }
}

int main(){
  int i;
  cin>>i;
  check(i);
}
