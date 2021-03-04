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

int answer(vi a, vi b, int n){
  mii table;
  for(int i= 0; i < a.size(); i++){
    for(int j = a[i]; j <= b[i]; j++){
      table[j] += 1;
    }
  }
  unsigned int mx = 0;
  for(int i= 0; i < a.size(); i++){
    for(int j = i+1; j < a.size(); j++){
      mii z = table;
      // vi qw = {a[i], b[i], a[j], b[j]};
      for(int p = a[i]; p <= b[i]; p++){
        z[p] -= 1;
        if(z[p] <= 0) z.erase(p);
      }
      for(int p = a[j]; p <= b[j]; p++){
        z[p] -= 1;
        if(z[p] <= 0) z.erase(p);
      }
      mx = max(z.size(), mx);
      if(mx == table.size()) return mx;
    }
  }
  return mx;
}



int main(){
  int n, q;
  cin>>n>>q;
  vi a, b;
  while(q--){
    int A, B;
    cin>>A>>B;
    a.push_back(A);
    b.push_back(B);
  }
  cout<<answer(a, b, n)<<endl;
}
