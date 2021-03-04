#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<long long int>

void answer(vi a, long long int s, long long int k){
  long long int ans = 0;
  long long int ground = 0;
  long long int box = 0;
  long long int p = 0;
  for(long long int i = a.size() - 1; i >= 0; i--){
    if(p == k){

      // cout<<"u"<<endl;
      p = 0;
      ans += ground;
      ground = 0;
    }
    // else{
    if(a[i] >= s){
      ground += a[i]%s;
    }else{
      if(ground >= (s - a[i])){
        ground -= (s-a[i]);
      }else{
        ground += a[i];
      }
    }
    cout<<ground<<endl;
    p++;
  }
  // }
  ans += ground;
  cout<<ans<<endl;
}

int main(){
  long long int n, s, k;
  cin>>n>>s>>k;
  vi a;
  while(n--){
    long long int p;
    cin>>p;
    a.push_back(p);
  }
  sort(a.begin(), a.end());
  for(long long int i = 0; i < a.size(); i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  answer(a, s, k);
}


//
// 8 4 3
// 2 1 4 3 1 7 8 4
