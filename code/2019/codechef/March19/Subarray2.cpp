#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>
#define pq priority_queue<int, vector<int>, greater<int>>
#define vpq vector<pq>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(pq a){
  while(!a.empty()){
    cout<<a.top()<<" ";
    a.pop();
  }
  cout<<endl;
}

void show(vpq a){
  int i =0;
  while(i < a.size()){
    show(a[i]);
    i++;
  }

}

int getX(pq a, int k){
  int m = k/a.size();
  if(k%a.size() != 0) m++;
  int X = k/m;
  if(k%m == 0) X--;

  // X++;
  int q = a.top();
  while(X>=0){
    q = a.top();
    a.pop();
    X--;
  }
  return q;
}

int allSubArrays(vi a, int k){
  int bful = 0;
  for(int i = 0; i < a.size(); i++){
    pq c;
    for(int j = i; j < a.size(); j++){
      c.push(a[j]);
      int X = getX(c, k);
      int F = 0;
      pq m = c;

      while(!m.empty()){
        if(m.top() == X) F++;
        m.pop();
      }

      pq qm = c;
      while(!qm.empty()){
        if(qm.top() == F){
          bful++;
          break;
        }
        qm.pop();
      }
    }
  }
  return bful;
}



int main(){
  vi m;
  int t;
  cin>>t;
  while(t--){
    int A, B;
    cin>>A>>B;
    vi a;
    while(A--){
      int q;
      cin>>q;
      a.push_back(q);
    }
    cout<<allSubArrays(a,B)<<endl;
  }

}
