#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

int answer(vi a, int k, int m){
  sort(a.begin(), a.end());
  int maxTown = a[a.size() - 1];
  int minMove = maxTown/m;
  if(maxTown%m != 0) minMove++;

  if(minMove > k) return -1;
  if(a.size() == 1){
    return 1;
  }
  vi diff;
  for(int i = 0 ; i < a.size()-1; i++){
    diff.push_back(a[i+1] - a[i]);
  }
  int ans = 0;

  if(minMove <= k){
    for(int i = 0; i < diff.size(); i++){
      if(diff[i] < minMove) ans++;
    }
    if(ans > minMove) ans = minMove;
  }
  if(ans == 0) ans++;
  return ans;
}



int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b, c;
    cin>>a>>b>>c;
    vi arr;
    while(a--){
      int p;
      cin>>p;
      arr.push_back(p);
    }
    cout<<answer(arr, b, c)<<endl;
  }

}
