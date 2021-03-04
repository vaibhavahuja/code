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
  int q;
  cin>>q;
  while(q--){
    int t;
    cin>>t;
    int neg = 0, pos = 0;
    while(t--){
      int p;
      cin>>p;
      if(p < 0) neg++;
      else pos++;
    }
    if(neg == 0 || pos ==0){
      cout<<abs(neg-pos)<<" "<<abs(neg-pos)<<endl;
    }else{
      cout<<max(pos, neg)<<" "<<min(pos, neg)<<endl;
    }
  }

}
