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
  // vi a = {10,22,9,33,21,50,41,60,80};
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi a(n);
    int j = 0;
    while(j < n){
      cin>>a[j];
      j++;
    }
    vi arr(a.size());
    int i = 0;
    while(i < a.size()){
      arr[i] = 1;
      i++;
    }
    for(int i = 0; i < a.size(); i++){
      for(int j = 0; j < i; j++){
        if(a[j] < a[i]){
          arr[i] = max(arr[i], arr[j] + 1);
        }
      }
    }
    i = 0;
    int ans = 0;
    while(i < a.size()){
      ans = max(arr[i], ans);
      i++;
    }

    cout<<ans<<endl;
  }

}
