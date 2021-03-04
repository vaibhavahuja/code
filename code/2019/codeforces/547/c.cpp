#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

void show(vi a){
  long long int i = 0;
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

bool check(vi a){
  sort(a.begin(), a.end());
  if(a[0] != 1) return false;
  if(a[a.size() - 1] != a.size()) return false;
  long long int m = 1;
  for(long long int i = 0; i < a.size() - 1; i++){
    // cout<<a[i+1]<<" "<<a[i]<<endl;
    m = a[i+1] - a[i];
    if(m != 1) return false;
  }
  return true;


}

void answer(vi a, long long int t){
  vi q;
  long long int p = 0;
  long long int i = 0;
  q.push_back(p);
  long long int mini = 0;
  while(i < a.size()){
    p += a[i];
    q.push_back(p);
    mini = min(mini, p);
    i++;
  }
  long long int plus = 1 - mini;
  for(long long int i = 0; i < q.size(); i++){
    q[i] += plus;
  }

  if(check(q)) show(q);
  else cout<<-1<<endl;

}

int main(){
  long long int t;
  cin>>t;
  long long int p = t-1;
  vi a;
  while(p--){
    long long int w;
    cin>>w;
    a.push_back(w);
  }
  answer(a, t);
}
