#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

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

bool inte(int a, int b, int c, int d){
  int m = (c-a)*(c-a) + (d-b)*(d-b);
  int q = sqrt(m);
  return ((q*q == m));
}

int main(){
  int a, b;
  cin>>a>>b;
  answer(a,b);
}
