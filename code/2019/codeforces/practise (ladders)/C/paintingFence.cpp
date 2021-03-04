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

vi preprocess(vi a){
  vi q;
  long long int cur = 0;
  for(long long int i = 0; i < a.size(); i++){
    q.push_back(cur + a[i]);
    cur = q[q.size() - 1];
  }
  return q;
}

void answer(vi a, vi l, vi r){
  for(long long int i = 0; i < l.size(); i++){
    for(long long int j = l[i]; j <= r[i]; j++){
      a[j] += 1;
    }
  }
  //now a is my count array;
  long long int answer = 0;
  for(long long int i = 0; i < l.size(); i++){
    vi cnt = a;
    long long int first = l[i];
    long long int second = r[i];
    long long int total = 0;
    for(long long int j = first; j <= second; j++){
      cnt[j] -= 1;
    }
    for(long long int j = 0; j < cnt.size(); j++){
      if(cnt[j] > 0) total += 1;
      if(cnt[j] != 1) cnt[j] = 0;
    }
    // show(cnt);
    vi pre = preprocess(cnt);
    // show(pre);
    for(long long int j = 0; j < l.size(); j++){
        if(j == i) continue;
        long long int wp = (pre[r[j]] - pre[l[j]-1]);
        answer = max(total-wp, answer);
      }
    }
  cout<<answer<<endl;
}


int main(){
  long long int n, k;
  cin>>n>>k;
  vi a(n+1 , 0);
  vi l, r;
  while(k--){
    long long int a, b;
    cin>>a>>b;
    l.push_back(a);
    r.push_back(b);
  }
  // show(a);
  answer(a, l, r);
}
