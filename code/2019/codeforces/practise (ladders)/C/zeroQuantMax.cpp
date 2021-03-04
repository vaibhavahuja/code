#include <bits/stdc++.h>
using namespace std;

#define vi vector<long double>
#define mii map<long double, int>

void show(vi a){
  long double i = 0;
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
  mii table;
  int p = 0;
  for(int i = 0; i < a.size();  i++){
    if(a[i] == 0 && b[i] != 0) continue;
    else if(a[i] == 0 && b[i] == 0) p += 1;
    else table[-1*(b[i]/a[i])] += 1;
  }
  int ans = 0;
  for(auto i = table.begin(); i != table.end(); i++){
    ans = max(i->second, ans);
  }
  // show(table);
  cout<<ans+p<<endl;

}

int main(){
  long double n;
  cin>>n;
  vi a, b;
  for(int i = 0; i < n; i++){
    long double p;
    cin>>p;
    a.push_back(p);
  }
  for(int i = 0; i < n; i++){
    long double p;
    cin>>p;
    b.push_back(p);
  }

  answer(a, b);
}
