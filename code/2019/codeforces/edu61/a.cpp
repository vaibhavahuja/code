//accepted

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

bool answer(long long int a, long long int b, long long int c, long long int d){
  if(a != d) return false;
  if(a == 0 && b == 0 && c > 0) return false;
  return true;
}


int main(){
  long long int a, b, c, d;
  cin>>a>>b>>c>>d;
  cout<<answer(a, b, c, d)<<endl;
}
