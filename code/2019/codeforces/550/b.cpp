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

long long int answer(vi even, vi odd){
  //case 1 - remove even first
  long long int first = 0;
  long long int e = even.size();
  long long int o = odd.size();

  if(e > o){
    long long int q = o + 1;
    for(long long int i = 0; i < e-q; i++){
      first += even[i];
    }
  }else if(e == o){
    first = 0;
  }else if(e < o){
    long long int q = e;
    for(long long int i = 0; i < o - q; i++){
      first += odd[i];
    }
  }




  long long int second = 0;

  if(e > o){
    long long int q = o;
    for(long long int i = 0; i < e-q; i++){
      second += even[i];
    }
  }else if(e == o){
    second = 0;
  }else if(e < o){
    long long int q = e + 1;
    for(long long int i = 0; i < o - q; i++){
      second += odd[i];
    }
  }
  // cout<<second<<endl;
  // cout<<first<<" "<<second<<endl;
//

  return min(first, second);
}


int main(){
  long long int t;
  cin>>t;
  vi odd, even;
  long long int sum = 0;
  while(t--){
    long long int p;
    cin>>p;
    if(p%2 == 0) even.push_back(p);
    else odd.push_back(p);
    // sum += p;
  }

  sort(even.begin(), even.end());
  sort(odd.begin(), odd.end());
  // show(even);
  // show(odd);


  cout<<answer(even, odd)<<endl;
}
