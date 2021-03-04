#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void subset(vi a, int i, vi out, vvi &ans){
	if(i == a.size()){
    ans.push_back(out);
    return;
  } 
  out.push_back(a[i]);
  subset(a, i+1, out, ans);
  out.pop_back();
  subset(a, i+1, out, ans);
}


int main(){
  vi a = {1,2,3};
  vi out;
  vvi ans;
  subset(a, 0, out, ans);
  // show(ans);
}
