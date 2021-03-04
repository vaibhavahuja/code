#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

int answer(vi a){
  int change = -1;
  for(int i = 0; i < a.size()-1; i++){
    if(a[i+1] < a[i]){
      change = i+1;
      break;
    }
  }
  // cout<<change<<endl;
  if(change != -1){
    for(int j = change; j < a.size() - 1; j++){
      // cout<<a[j+1]<<" "<<a[j]<<endl;
      if(a[j+1] < a[j]) return -1;
    }
    if(a[a.size() - 1] > a[0]) return -1;
  }
  if (change == -1) return 0;
  return (a.size() - change);

}

int main(){

  int n;
  cin>>n;
  vi a;
  while(n--){
    int p;
    cin>>p;
    a.push_back(p);
  }
  cout<<answer(a)<<endl;
}
