#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>

int answer(vi a, int t){
  int l = 0, len = 0;
  for(int j = 0; j < a.size(); j++){
    t -= a[j];
    while(t < 0){
      t += a[l];
      l++;
    }
    len = max(len, j-l+1);
  }
  return len;
}

int main(){
  int n, t;
  cin>>n>>t;
  vi a;
  while(n--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  cout<<answer(a, t)<<endl;


}
