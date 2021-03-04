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

void answer(vi a, int k){
  int pos = a.size();
  for(int i = 0; i < a.size(); i++){
    int ans = 0;
    int p = 1;
    for(int j = i; j < a.size(); j++){
      ans += a[j]/p;
      p++;
    }
    if(ans <= k){
      cout<<i+1<<endl;
      return;
    }
  }
  cout<<a.size()+1<<endl;
}


int main(){
  // int t;
  // cin>>t;
  // while(t--){
  //
  // }
  int n, k;
  cin>>n>>k;
  vi a;
  while(n--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  answer(a, k);

}
