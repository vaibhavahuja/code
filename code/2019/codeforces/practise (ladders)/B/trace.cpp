#include <bits/stdc++.h>
using namespace std;
#define vi vector<float>
#define mii map<int, int>
#define pi 3.1415926536

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

float answer(vi a){
  sort(a.begin(), a.end());
  int i = a.size() - 1;
  float ans = 0;
  int q = 1;
  while(i >= 0){
    if(q == 1) ans += a[i]*a[i];
    else ans -= a[i]*a[i];
    q ^= 1;
    i--;
  }
  ans*=pi;
  return ans;
}

int main(){
  vi a;
  int t;
  cin>>t;
  while(t--){
    float p;
    cin>>p;
    a.push_back(p);
  }
  cout<<fixed<<setprecision(8)<<answer(a)<<endl;
}
