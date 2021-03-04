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


int main(){
  long long int t;
  cin>>t;
  long long int f = 0, s = 0;
  // string f1, s1;
  vi a, b;
  int last = 0;
  while(t--){
    long long int p;
    cin>>p;
    last = p;
    if(p > 0){
      f+=p;
      a.push_back(p);
    }else if(p < 0){
      s += abs(p);
      b.push_back(abs(p));
    }
  }
  if(s > f){
    cout<<"second"<<endl;
  }else if(s < f){
    cout<<"first"<<endl;
  }else{
    if(a == b){
      string m = (last < 0)?"second":"first";
      cout<<m<<endl;
    }else{
      int i = 0, j = 0;
      while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
          cout<<"second"<<endl;
          return 0;
        }else if(a[i] > b[j]){
          cout<<"first"<<endl;
          return 0;
        }
        i++;
        j++;
      }
      if(i == a.size() && j != a.size()){
        cout<<"second"<<endl;
      }else if(i != a.size() && j == a.size()){
        cout<<"first"<<endl;
      }
    }
  }
  // cout<<f<<endl;
  // cout<<s<<endl;
  // cout<<f1<<endl;
  // cout<<s1<<endl;



}
