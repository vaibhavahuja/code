//accepted good.

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

void answer(vi a, vi b){
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int i = a.size() - 1;
  int j = b.size() - 1;
  int ans = 0;
  while(i >= 0 && j >= 0){
    if(b[j] >= a[i]){
      j--;
      i--;
    }else{
      ans++;
      i--;
    }
  }
  if(i < 0) cout<<ans<<endl;
  else{
    ans += (i+1);
    cout<<ans<<endl;

  }

}



int main(){
  int n, m;
  cin>>n>>m;
  vi a, b;
  while(n--){
    int q;
    cin>>q;
    a.push_back(q);
  }
  while(m--){
    int w;
    cin>>w;
    b.push_back(w);
  }
  answer(a, b);
}
