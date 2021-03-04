#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

int gcd(int a, int b){
  if(a == 0) return b;
  if(b == 0) return a;
  if(a == b) return a;

  if(a > b) return gcd(a-b, b);
  return gcd(a, b-a);
}

int lcm(int a, int b){
  return ((a*b)/gcd(a, b));
}

void show(vi a){
  for(int i = 0; i < a.size(); i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

void copy(vi &a, vi &b){
  for(int i = 0; i < a.size(); i++){
    b.push_back(a[i]);
  }
}

void empty(vi &a){
  while(a.size()!=0){
    a.pop_back();
  }
}

void answer(vi a, vi b, vi ans){
  for(int i = 0; i < a.size(); i++){
    // show(b);
    empty(b);
    for(int j = 0; j < a.size(); j++){
      // cout<<lcm(a[i], a[j])<<endl;
      if(lcm(a[i], a[j]) == a[i] ){
        b.push_back(a[j]);
      }
    }
    // show(b);
    if(ans.size() < b.size()){
      empty(ans);
      copy(b, ans);
    }
  }
  show(ans);
}


int main(){
  // vi a = {8,32,16,4};
  int i;
  cin>>i;
  // allSub(a, 0);
  vi a, b, ans;
  while(i--){
    int q;
    cin>>q;
    a.push_back(q);
  }
  answer(a, b, ans);
  // cout<<lcm(a)<<endl;

}
