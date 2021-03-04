#include <iostream>
#include <vector>
#include <algorithm>
// #include <pair>
using namespace std;

// #define pi pair<long long int, long long int>
// #define vp vector<pi>
#define vi vector<long long int>

long long int answer(vi a){
  sort(a.begin(), a.end());
  long long int ans = 0;
  for(long long int i = 0; i < a.size(); i++){
    if(ans >= a[i]){
      ans++;
    }else break;
  }
  return ans;
}


int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
    vi a;
    while(n--){
      long long int p;
      cin>>p;
      a.push_back(p);
    }
    cout<<answer(a)<<endl;
  }
}
