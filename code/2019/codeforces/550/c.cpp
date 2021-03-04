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
  int t;
  cin>>t;
  vi a;
  while(t--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  mii table;
  for(int i = 0; i < a.size(); i++){
    table[a[i]] += 1;
  }
  // show(table);

  for(auto i = table.begin(); i != table.end(); i++){
    if(i->second > 2){
      cout<<"NO"<<endl;
      return 0;
    }
  }


  sort(a.begin(), a.end());

  vi first, second;
  int j = 0;
  while(j < a.size() - 1){
    if(a[j+1] == a[j]){
      first.push_back(a[j]);
      j++;
      second.push_back(a[j]);
    }else{
      first.push_back(a[j]);
    }
    j++;
  }
  if(j == a.size() - 1){
    first.push_back(a[j]);
  }

  sort(first.begin(), first.end());
  sort(second.begin(), second.end(), greater<int>());
  cout<<"YES"<<endl;
  cout<<first.size()<<endl;
  show(first);
  cout<<second.size()<<endl;
  show(second);
}
