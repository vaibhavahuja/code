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

void answer(vi a){
  sort(a.begin(), a.end());
  // show(a);
  long long int i = 0;
  long long int j = 0;
  long long int ans = 0;
  while(i < a.size() && j < a.size()){
    if(a[j] - a[i] <= 5){
      j++;
    }else{
      while(a[j] - a[i] > 5) i++;
    }
    ans = max(ans, j-i+1);
  }

  cout<<ans-1<<endl;
}


int main(){
    long long int n;
    cin>>n;
    vi a;
    while(n--){
      long long int p;
      cin>>p;
      a.push_back(p);
    }

    answer(a);
}
