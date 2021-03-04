#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int p;
    cin>>p;
    long long int ans = 0;
    while(p--){
      long long int q;
      cin>>q;
      ans += (q-1);
    }
    ans++;
    cout<<ans<<endl;
  }
}
