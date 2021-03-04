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


int main(){
  int h, b;
  cin>>h>>b;
  vi a;
  while(b--){
    int w;
    cin>>w;
    a.push_back(w);
  }

  int m = 0;
  vi p;
  for(int i = 0; i < a.size(); i++){
    p.push_back(m + a[i]);
    m = p[p.size() - 1];
  }
  show(p);
  int ans = 0;
  for(int i = 0; i < p.size(); i++){
    if(h + p[i] <= 0){
      cout<<i<<endl;
      return 0;
    }
    ans = i;
  }
  int w;
  if(ans == a.size() - 1){
    w = h/abs(p[p.size()-1]);
  }
  h /= abs(p[p.size() - 1]);
  w--;
  w *= a.size();
  if(h )





}
