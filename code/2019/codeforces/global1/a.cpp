#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void odeve(int b, int k, vi a){
  int last = b%10;
  int n = last;
  vi c;
  c.push_back(last);
  bool m = true;
  while(true){
    last = last*n;
    last %= 10;
    if(c[0] == last) break;
    else c.push_back(last);
  }
  // c.push_back(1);
  // show(c);
  int ans = 0;
  ans += a[a.size() - 1];
  int j = 0;
  for(int i = a.size()-2; i >= 0; i--){
    // cout<<a[i]<<" "<<c[j]<<endl;
    ans += a[i]*c[(j)%c.size()];
    j++;
    ans %= 10;
  }
  // cout<<ans<<endl;
  if(ans % 2 == 0) cout<<"even"<<endl;
  else cout<<"odd"<<endl;
}


int main(){
  int b, k;
  cin>>b>>k;
  vi a;
  for(int i = 0; i < k; i++){
    int q;
    cin>>q;
    a.push_back(q);
  }
  odeve(b, k, a);


}
