#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

void show(vi a){
  long long int i = 0;
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

void answer(vi a){
  vi o, first, second;
  long long int i = a.size() - 2;

  while(i >= 0){
    if(a[i] == a[i+1]){
      i--;
      continue;
    }
    else if(a[i] + abs(a[i+1] - a[i] == a[i+1])) o.push_back(1), first.push_back(i+1), second.push_back(i+2), a[i] = a[i+1];
    else if(a[i] - abs(a[i+1] - a[i] == a[i+1])) o.push_back(2), first.push_back(i+1), second.push_back(i+2), a[i] = a[i+1];

    i--;
    // show(a);
  }
  cout<<o.size()<<endl;
  for(long long int i = 0; i < o.size(); i++){
    cout<<o[i]<<" "<<first[i]<<" "<<second[i]<<endl;
  }

}



int main(){
  long long int t;
  cin>>t;
  vi a;
  while(t--){
    long long int p;
    cin>>p;
    a.push_back(p);
  }

  answer(a);
}
