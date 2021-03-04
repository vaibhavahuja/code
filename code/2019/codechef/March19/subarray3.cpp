//got ac for 20 polong long ints.
//TLE for rest.
//need to think of a better solution
//use this code to generate test cases

#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vvi vector<vi>
#define mii map<long long int, long long int>

void show(vi a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(vvi a){
  long long int i = 0;
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

long long int getX(vi a, long long int k){
  long long int m = k/a.size();
  if(k%a.size() != 0) m++;
  long long int X = k/m;
  if(k%m == 0) X--;

  return a[X];
}

void push(vi &a, long long int b){
  auto it = a.begin();
  if(a.size() == 0){
    a.push_back(b);
    return;
  }
  while(*it < b && it != a.end()){
    it++;
  }
  a.insert(it, b);
}

long long int answer(vi a, long long int k){
  long long int bful = 0;
  for(long long int i = 0; i < a.size(); i++){
    vi c;
    mii table;
    for(long long int j = i; j < a.size(); j++){
      push(c, a[j]);
      table[a[j]] += 1;
      long long int X = getX(c, k);
      long long int F = table[X];
      if(table.find(F) != table.end()) bful++;
    }
  }
  return bful;
}




int main(){
  long long int t;
  vi m;
  cin>>t;
  while(t--){
    long long int A, B;
    cin>>A>>B;
    vi a;
    while(A--){
      long long int q;
      cin>>q;
      a.push_back(q);
    }
    long long int k = B;
    cout<<answer(a, k)<<endl;

  }
}
