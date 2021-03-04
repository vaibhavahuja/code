#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

bool answer(vi a, int b, int k){
  int q = a.size() - 1;
  int p = 1;
  int ans = 0;
  b %= 10;
  for(int i = a.size()-1; i >= 0; i--){
    // cout<<a[i]<<" "<<p<<endl;
    ans += (p*a[i]);
    p *= b;
    p %= 10;
  }
  if(ans%2 == 0) return true;
  else return false;
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
  if(answer(a, b, k)) cout<<"even"<<endl;
  else cout<<"odd"<<endl;

}
