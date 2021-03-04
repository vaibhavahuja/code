//wa. o(n) solution? how?

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define vi vector<int>
// int findOccur(string s, string p){
//   int count = 0;
//   auto nPos = s.find(p, 0);
//   while(nPos != string::npos){
//     count++;
//     nPos = s.find(p, nPos+1);
//   }
//   return count;
// }

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void answer(string s){
  vi a;
  int ans = 0;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == s[0]) a.push_back(i);
  }
  int p = a.size();
  ans = max(ans, p);
  // cout<<"y"<<ans<<endl;
  string m = "";
  int i = 0;
  string ans2 = "";
  while(i < s.length()){
    for(int j = 0; j < a.size(); j++){
      if(a[j] + i + 1 >= s.length()){
        a.erase(a.begin()+j);
      }else if(s[a[j]+i+1] != s[i+1]){
        a.erase(a.begin()+j);
      }
      // cout<<m<<" "<<a.size()<<endl;
      // show(a);
    }
    m += s[i];
    // ans = max(ans, qw);
    i++;
    int qw = a.size();
    if(ans <= qw){
      ans2 = m;
      ans = qw;
      ans2 += s[i];
    }
  }
  cout<<ans2<<endl;
  // cout<<ans<<endl;



}


int main(){
  // string s;
  // cin>>s;
  // cout<<answer(s)<<endl;
  int t;
  cin>>t;
  while(t--){
    int q;
    cin>>q;
    string s;
    cin>>s;
    answer(s);
  }
  //   string p = "";
  //   int ans = 0;
  //   string qw;
  //   for(int i = 0; i < s.size(); i++){
  //     p += s[i];
  //     if(findOccur(s, p) >= ans){
  //       ans = findOccur(s, p);
  //       qw = p;
  //     }
  //   }
  //   cout<<qw<<endl;
  // }
}
