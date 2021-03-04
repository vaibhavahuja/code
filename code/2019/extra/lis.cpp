#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>

int main(){
  // vi a = {10, 22, 9, 33, 21, 50, 41, 60, 80};
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi a;
    while(n--){
      int p;
      cin>>p;
      a.push_back(p);
    }
    vi b;
    for(int i = 0; i < a.size(); i++){
      b.push_back(1);
    }
    int ans = 0;
    for(int i = 0; i < a.size(); i++){
      int mx = 0;
      for(int j = 0; j < i; j++){
        // cout<<a[j]<<" ";
        if(a[j] <= a[i]){
          mx = max(mx, b[j]);
          // cout<<a[i]<<" "<<b[j]<<endl;
        }
        // cout<<endl;
      }
      b[i] += mx;
      ans = max(b[i], ans);
    }
    cout<<ans<<endl;
  }
}
