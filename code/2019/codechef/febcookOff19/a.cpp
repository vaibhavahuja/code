#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int n, b;
    cin>>n>>b;
    long long int ans = 0;
    while(n--){
      long long int w, h, p;
      cin>>w>>h>>p;
      if(p <= b){
        ans = max(ans, w*h);
      }
    }
    if(ans == 0){
      cout<<"no tablet"<<endl;
    }else cout<<ans<<endl;
  }

}
