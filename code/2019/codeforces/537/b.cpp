
#include <iostream>
#include <iomanip>
// #include<stdc++>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

int main(){
  int n, k, mq;
  cin>>n>>k>>mq;
  vi a;
  float m = 0;
  while(n--){
    float p;
    cin>>p;
    m = max(m, p);
  }
  m += k;
  cout<<fixed<<setprecision(8)<<m<<endl;

}
