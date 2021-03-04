#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

void show(vi a, int b, int j){
  for(int i= b; i <= j; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int check(vi a){
  int q = 0;
  for(int i = 0; i < a.size() - 1; i++){
    if(a[i+1] != a[i]) q++;
  }
  return q;
}


//wrong solution
// void answer(vi a, int begin, int m, int k, int end, int &o){
//   if(check(a) <= k){
//     o = min(m, o);
//     return;
//   }
//   if(begin == a.size()){
//     return;
//   }
//   if(end == 26){
//     return;
//   }
//
//   answer(a, begin+1, m, k, end+1, o);
//   a[begin] = (a[begin] + 1)%26;
//   answer(a, begin, m+1, k, end+1, o);
// }


int ans2(vi a, int k){
  int m = a.size() - k;
  int finalAns = 1e5;
  for(int i = 0; i <= a.size() - m; i++){

    int mx = 0;
    int ans = 0;
    for(int j = i; j < i+m; j++){
      mx = max(mx, a[j]);
      // cout<<a[j]<<" ";
    }
    for(int j = i; j < i+m; j++){
      ans += abs(mx - a[j]);
      // cout<<a[j]<<" ";
    }
    // cout<<endl;
    finalAns = min(finalAns, ans);
    mx = 1e5;
    int ans2 = 0;
    for(int j = i; j < i+m; j++){
      mx = min(mx, a[j]);
      // cout<<a[j]<<" ";
    }
    for(int j = i; j < i+m; j++){
      ans2 += abs(mx - a[j] - 26)%26;
      // cout<<a[j]<<" ";
    }
    finalAns = min(finalAns, ans2);
  }
  return finalAns;
}


int main(){
  // vi a = {1,1,1,2};
  string s;
  // s = "abcz";
  cin>>s;
  int k;
  // k = 1;
  cin>>k;

  vi b;
  for(int i = 0; i < s.length(); i++){
    b.push_back(s[i] - 'a' + 1);
  }
  cout<<ans2(b, k)<<endl;
  // cout<<ans2
  // int o = 1e5;
  // answer(b, 0, 0, k, 0, o);
  // cout<<o<<endl;

}
