// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <map>
#include <vector>
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
    cout<<i->first<<" "<<i->second<<" ";
  }
}

void answer(int n){
  mii table;
  for(int i = 2; i*i <= n; i++){
    int cnt = 0;
    while(n%i == 0){
      n/=i;
      cnt++;
    }
    table[i] = cnt;
  }

  if(n > 2) table[n] = 1;


  show(table);
}

int main(){
  while(1){
    int n;
    cin>>n;
    if(n == -1) break;
    answer(n);
    cout<<endl;
  }

}
