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

void answer(int a, int b, int c, int d, int q){
  if(q == 0) cout<<a<<" "<<d<<endl;
  else cout<<d<<" "<<a<<endl;
}


int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int A, B, C, D;
    int q = 0;
    if(a <= c){
      A = a;
      B = b;
      C = c;
      D = d;
    }else{
      q = 1;
      A = c;
      B = d;
      C  = a;
      D = b;
    }
    answer(A, B, C, D, q);
  }
}
