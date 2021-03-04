// will do it later

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// string answer(int n, int k){   //stupid naive approach: TLE obv
//   int w = 0;
//   int i = 1;
//   while(1){
//     n -= pow(k, i);
//     if(n < 0) return "Bob";
//
//     n-= pow(k, i);
//     if(n < 0) return "Alice";
//
//     i++;
//
//   }
// }


string answer(int n, int k){
  float c = log(1 - (n)*(1-k)/(k));
  float d = log(k);
  float e = c/d;
  int f = e;
  // cout
  int m = pow(k, f);
  // cout<<k<<" "<<e<<endl;
  // cout<<m<<endl;
  int q = n - (2*k)*(1-m)/(1-k);
  cout<<q<<" "<<m<<endl;
  q -= m;
  if(q < 0) return "Alice";

  return "Bob";

  // cout<<e<<" "<<f<<endl;


  // cout<<c<<d<<endl;

}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;
    cout<<answer(n, k)<<endl;
  }
  // cout<<log(10);
  // cout<<answer(10, 3);
}
