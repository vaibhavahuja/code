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

int answer(int n, int k){
  vi a;
  for(int i = 0; i < n; i++){
    a.push_back(1);
  }
  int curPos = k-1;
  int ans = 0;

  if(a[curPos] == 1){
    a[curPos]--;
    curPos--;
    ans+=3;
  }
  while(curPos >= 0){
    if(a[curPos] == 1){
      a[curPos] -= 1;
      ans += 2;
    }
    ans += 1;
    curPos--;
  }
  if(k == a.size()){
    return ans;
    // return;
  }
  curPos = 0;
  while(curPos < a.size()){
    if(a[curPos] == 1) {
      a[curPos] -= 1;
      ans += 2;
    }
    if(curPos != a.size() - 1) ans += 1;
    curPos++;
  }

  return ans;
  // cout<<ans<<endl;

}


int answer1(int n, int k){
  vi a;
  for(int i = 0; i < n; i++){
    a.push_back(1);
  }
  int curPos = k;
  if(k == 1 || k == a.size()) curPos = k-1;
  int ans = 0;

  if(a[curPos] == 1){
    a[curPos]--;
    curPos++;
    ans+=3;
  }

  while(curPos < a.size()){
    if(a[curPos] == 1) {
      a[curPos] -= 1;
      ans += 2;
    }
    ans += 1;
    curPos++;
  }

  if(k == 1){
    return ans;
  }
  // cout<<ans<<endl;

  curPos = a.size() - 1;


  while(curPos >= 0){
    // cout<<ans<<endl;
    // show(a);
    if(a[curPos] == 1){
      a[curPos] -= 1;
      ans += 2;
    }
    if(curPos != 0) ans += 1;
    curPos--;
  }

  return ans;

}


int main(){
  int a, b;
  cin>>a>>b;
  int ans1 = answer(a, b);
  int ans2 = answer1(a, b);
  // cout<<ans2<<endl;
  cout<<ans1<<" "<<ans2<<endl;
  cout<<min(ans1, ans2)<<endl;

  // return ans1;
  // cout<<min(ans1, ans2)<<endl;

}
