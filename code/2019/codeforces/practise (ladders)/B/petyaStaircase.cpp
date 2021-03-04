//please see corner test cases from nex ttime

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<long long int>

bool can(vi a, int n){
  if(a[0] == 1 || a[a.size() - 1] == n) return false;
  if(a.size() <= 2) return true;
  vi b;
  for(int i =0; i < a.size() - 2; i++){
    if(a[i+1] - a[i] == 1 && a[i+2] - a[i+1] == 1) return false;
  }
  return true;
}

int main(){
  int n, m;
  cin>>n>>m;
  vi a;
  while(m--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  if(a.size() == 0) cout<<"YES"<<endl;
  else{
    sort(a.begin(), a.end());
    string s = can(a, n)?"YES":"NO";
    cout<<s<<endl;
  }

}
