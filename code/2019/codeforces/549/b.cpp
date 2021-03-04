//cannot believe this. will solve tomorrow.

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

int ans(string s){
  int i = 0;
  int ans = 1;
  while(i < s.length()){
    ans *= (s[i] - '0');
    i++;
  }
  return ans;
}

string answer(string s){
  if(s.length() == 1){
    // cout<<s<<endl;
    return s;
  }


  int i = s.length() - 1;
  string q = "";
  int m = 0;
  while(i >= 1){
    if(s[i] - '0' > 5 && m == 0) q += s[i], m = 1;
    else if(m == 1 && s[i] - '0' - 1 > 5) q += s[i], m = 0;
    else q += '9', m = 0;

    i--;
  }
  return q;
  // cout<<q<<endl;
}

int brute(int a){
  int mx = -1;
  int when;
  for(int i = 1; i <= a; i++){
    string m = to_string(i);
    if(ans(m) > mx) mx = ans(m), when = i;
    // mx = max(mx, ans(m));
  }
  // cout<<when<<endl;
  return when;
}


int main(){
  // string s;
  // cin>>s;
  // int p = stoi(s);
  // cout<<ans(answer(s))<<endl;
  int cnt = 0;
  for(int i = 1; i <= 300; i++){
    string q = to_string(i);
    cout<<i<<" "<<brute(i)<<endl;
    // if(brute(i) != max(ans(answer(q)), ans(q))){
    //   cnt++;
    //   cout<<q<<endl;
    //   cout<<brute(i)<<" "<<max(ans(answer(q)), ans(q))<<" "<<answer(q)<<endl;
    // }
  }
  cout<<cnt<<endl;
}
