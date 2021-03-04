//to do from scratch

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>

string answer(vi p, int a, int b){
  int alice = 0, bob = 0;
  int chance = 0;
  for(int i = 0; i < p.size(); i++){
    if(p[i]%a == 0 && p[i]%b == 0) chance++;
    if(p[i]%b == 0) alice++;
    if(p[i]%a == 0) bob++;
  }
  if(alice == 0 && bob == 0) return "ALICE";
  if(alice > bob) return "ALICE";
  else return "BOB";
  // cout<<alice<<" "<<bob<<" "<<chance<<endl;

}

string ans(vi p, int a, int b){
  int alice = 0, bob = 0;
  int chance = 0;
  for(int i = 0; i < p.size(); i++){
    if(p[i]%a == 0 && p[i]%b == 0) chance++;
    else if(p[i]%b == 0) alice++;
    else if(p[i]%a == 0) bob++;
  }

  if(alice == 0 && bob == 0) return "BOB";
  if(alice > bob) return "BOB";
  else return "ALICE";

}

int main(){

  int t;
  cin>>t;
  while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    vi p;
    for(int i = 0; i < n; i++){
      int q;
      cin>>q;
      p.push_back(q);
    }
    if(a == b) cout<<answer(p, a, b)<<endl;
    else cout<<ans(p, a, b)<<endl;
  }

}
