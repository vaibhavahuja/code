w//got ac for 20 points.
//TLE for rest.
//need to think of a better solution
//use this code to generate test cases

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

void show(vvi a){
  int i = 0;
  while(i < a.size()){
    show(a[i]);
    i++;
  }
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

int getX(vi a, int k){
  int m = k/a.size();
  if(k%a.size() != 0) m++;
  int X = k/m;
  if(k%m == 0) X--;

  return a[X];
}

vvi allSubArrays(vi a){
  vvi d;
  for(int i = 0; i < a.size(); i++){
    vi c;
    for(int j = i; j < a.size(); j++){
      c.push_back(c[j]);
      d.push_back(c);
    }
  }

  for(int i = 0; i < d.size(); i++){
    sort(d[i].begin(), d[i].end());
  }
  // show(d)
  return d;
}




int main(){
  int t;
  vi m;
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
    int k = B;
    vvi c = allSubArrays(a);
    int bful = 0;
    for(int i = 0; i < c.size(); i++){

      int X = getX(c[i], k);
      cout<<"this is "<<X<<endl;
      m.push_back(X);
      int F = 0;
      for(int j = 0; j < c[i].size(); j++){
        if(c[i][j] == X) F++;
      }
      for(int j = 0; j < c[i].size(); j++){
        if(c[i][j] == F){
          bful++;
          break;
        }
      }
    }
    cout<<bful<<endl;
  }
  // show(m);
}
