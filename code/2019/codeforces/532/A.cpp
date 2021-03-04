#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>

int sum(vi a){
  int sum = 0;
  for(int i= 0; i < a.size(); i++){
    sum += a[i];
  }
  return abs(sum);
}

int answer(vi a, int k){
  int ans = 0;
  for(int i = 0; i < a.size(); i++){
    vi c = a;
    int p = i;
    while(p < c.size()){
      c[p] = 0;
      p+=k;
    }
    p = i;
    while(p >= 0){
      c[p] = 0;
      p -= k;
    }
    ans = max(sum(c), ans);
  }
  return ans;
}

int main(){
  // vi a = {1,2,3};
  int n, k;
  cin>>n>>k;
  vi a;
  while(n--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  cout<<answer(a, k)<<endl;
}
