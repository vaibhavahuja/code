#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

#define vi vector<int>

string getBinary(int a, int len){
  string b = "";
  while(a > 0){
    string p = to_string(a%2);
    b += p;
    a/=2;
  }
  while(b.length() != len) b += '0';
  reverse(b.begin(), b.end());
  return b;
}

string getAnswer(vector<string> s, vi a){
  for(int i = 0; i < s.size(); i++){
    int ans = 0;
    for(int j = 0; j < s[i].length(); j++){
      if(s[i][j] == '0') ans += a[j];
      if(s[i][j] == '1') ans -= a[j];
    }
    if(ans == 0 || ans%360 == 0){
      return "YES";
    }
  }
  return "NO";
}

int main(){
  int n;
  cin>>n;
  vi a;
  int q = n;
  while(q--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  vector<string> s;
  for(int i = 0; i < pow(2,n); i++){
    s.push_back(getBinary(i, n));
  }
  cout<<getAnswer(s, a)<<endl;
  // cout<<"ok"<<endl;

}
