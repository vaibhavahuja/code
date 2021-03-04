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

bool over(int a, int b, int c, int d){
  if(b < c) return false;
  if(a > d) return false;
  return true;
}

int answer(vi a, vi b, vi c, vi d, int l, int r){
  int ans = 0;
  for(int i = l; i <= r; i++){
    for(int j = 0; j < c.size(); j++){
      int qq = ans;
      int q = c[j] + i;
      int w = d[j] + i;
      for(int k = 0; k < a.size(); k++){
        if(over(a[k], b[k], q, w)){
          ans++;
          break;
        }
      }
      if(qq == ans-1){
        qq = ans;
        break;
      }
    }
  }
  return ans;

}



int main(){
  int p, q, l, r;
  cin>>p>>q>>l>>r;
  vi a, b, c, d;
  while(p--){
    int q, w;
    cin>>q>>w;
    a.push_back(q);
    b.push_back(w);
  }

  while(q--){
    int w, e;
    cin>>w>>e;
    c.push_back(w);
    d.push_back(e);
  }


  cout<<answer(a, b, c, d, l, r)<<endl;
}
