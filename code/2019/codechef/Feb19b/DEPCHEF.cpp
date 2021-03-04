#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

int answer(vi a, vi d){
  int maxd = -1;
  for(int i = 0; i < a.size(); i++){
    if(d[i] > a[(i-1<0)?(a.size() - 1):(i-1)] + a[(i+1)%a.size()]) maxd = max(d[i], maxd);
  }
  return maxd;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi a, d;
    int o = n;

    while(o--){
      int q;
      cin>>q;
      a.push_back(q);
    }

    while(n--){
      int qq;
      cin>>qq;
      d.push_back(qq);
    }
    cout<<answer(a, d)<<endl;
  }
}
