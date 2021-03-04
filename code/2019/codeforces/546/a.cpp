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
  int n;
  cin>>n;
  int cha = n;
  mii table;
  int t = 0;
  while(n--){
    t++;
    int a, b;
    cin>>a>>b;
    for(int i = a; i <= b; i++){
      table[i] = t;
    }
  }
  // show(table);
  int k;
  cin>>k;

  int p = table[k];
  cout<<cha-p+1<<endl;


}
