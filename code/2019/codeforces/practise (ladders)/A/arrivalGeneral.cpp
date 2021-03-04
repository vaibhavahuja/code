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
  int mini = 1e5;
  int maxi = 0;
  while(t--){
    int n;
    cin>>n;
    a.push_back(n);
    mini = min(mini, n);
    maxi = max(maxi, n);
  }

  int ans = 0;
  int q = -1;
  int posMax = -1, posMin = -1;
  for(int i = a.size()-1; i >= 0; i--){
    q++;
    if(a[i] == mini){
      ans += q;
      posMin = i;
      break;
    }
  }

  for(int i= 0; i < a.size(); i++){
    if(a[i] == maxi){
      ans += i;
      posMax = i;
      break;
    }
  }
  if(posMin < posMax) ans--;
  cout<<ans<<endl;
}
