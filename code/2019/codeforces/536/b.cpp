#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pii pair<long long int, long long int>
#define vi vector<long long int>
#define vp vector<pii>

void show(vp a){
  auto i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
}


long long int answer(vp &cosa, vi &a, vi &c, long long int t, long long int d){
  long long int cost = 0;
  long long int available = a[t-1];
  if(available >= d){
    cost += d*c[t-1];
    a[t-1] -= d;
  }else{
    if(a[t-1] > 0){
      cost += a[t-1]*c[t-1];
      d -= a[t-1];
      a[t-1] = 0;
    }
    for(long long int i = 0; i < cosa.size(); i++){

      if(d == 0) break;
      if(a[cosa[i].second] >= d){
        cost += d*c[cosa[i].second];
        a[cosa[i].second] -= d;
        d = 0;
        break;
      }else{
        cost += a[cosa[i].second]*c[cosa[i].second];
        d -= a[cosa[i].second];
        a[cosa[i].second] = 0;

      }

  }
  if(d > 0){
    int pqw = 0;
    for(int i = 0; i < a.size(); i++){
      if(a[i] == 0) pqw++;
    }
    if(pqw == a.size()) return 0;
  }
  return cost;

}

int main(){
  long long int n, m;
  cin>>n>>m;
  vi a, c;
  long long int q = n;
  while(q--){
    long long int pq;
    cin>>pq;
    a.push_back(pq);
  }
  q = n;
  while(q--){
    long long int pq;
    cin>>pq;
    c.push_back(pq);
  }
  vp cosa;

  for(long long int i = 0; i < a.size(); i++){
    pii ca;
    ca.first = c[i];
    ca.second = i;
    cosa.push_back(ca);
  }
  sort(cosa.begin(), cosa.end());
  while(m--){
    long long int t, d;
    cin>>t>>d;
    cout<<answer(cosa, a, c, t, d)<<endl;
  }
}
