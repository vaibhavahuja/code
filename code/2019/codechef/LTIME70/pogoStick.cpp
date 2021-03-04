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

int answer(vi a, int k){
  // int i = a.size() - 1;
  vi b(a.size(), 0);
  // show(b);


  int q = k;
  int w = 1;
  while(q--){
    int p = 0;
    for(int i = a.size() - w; i >= 0; i -= k){
      // cout<<a[i]<<endl;
      b[i] += p;
      b[i] += a[i];
      p = b[i];
    }
    // show(b);
    w++;
  }

  int mx = -1e7;
  for(int i = 0; i < b.size(); i++){
    mx = max(mx, b[i]);
  }
  return mx;

}



int main(){
  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;
    vi a;
    while(n--){
      int p;
      cin>>p;
      a.push_back(p);
    }
    cout<<answer(a, k)<<endl;
  }
}
