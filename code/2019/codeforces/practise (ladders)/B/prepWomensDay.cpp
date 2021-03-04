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
  int n, k;
  cin>>n>>k;
  mii table;
  int m = n;
  while(n--){
    int p;
    cin>>p;
    table[p%k] += 1;
  }
  int ans = 0;
  if(k%2 == 0){
    ans += table[k/2]/2;
    table.erase(k/2);
  }
  ans += table[0]/2;

  for(int i = 1; i < k; i++){
    if(table.find(i) != table.end() && table.find(k-i) != table.end()){
      int q = min(table[i], table[k-i]);
      table.erase(i);
      table.erase(k-i);
      ans += q;
    }
  }

  cout<<ans*2<<endl;

}
