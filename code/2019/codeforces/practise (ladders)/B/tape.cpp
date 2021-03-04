#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<long long int>

void show(vi a){
  for(long long int i = 0; i < a.size(); i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int answer(vi a, long long int k){
  vi b;
  long long int ans = (a[a.size() - 1] - a[0] + 1);
  for(long long int i = 0; i < a.size() - 1; i++){
    b.push_back(a[i+1] - a[i] - 1);
  }
  // show(b);
  sort(b.begin(), b.end());
  long long int o = b.size() - 1;
  long long int q = k-1;
  while(q--){
    // cout<<b[o]<<" a"<<endl;
    ans -= b[o];
    o--;
  }
  return ans;

}

int main(){
  long long int n, m, k;
  cin>>n>>m>>k;
  vi a;
  long long int q = n;
  while(n--){
    long long int p;
    cin>>p;
    a.push_back(p);
  }
  cout<<answer(a, k)<<endl;
}
