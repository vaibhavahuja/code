#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vp vector<pair<int, int>>
void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void showp(vp a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
  cout<<endl;
}

int main(){
  int n, m, k;
  cin>>n>>m>>k;
  vi a;
  int q = n;
  while(n--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  int cov = q/k;
  int rem = q%k;
  int ans = 0;





}
