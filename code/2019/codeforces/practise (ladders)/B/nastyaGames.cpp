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

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

int answer(int a, int b){
  int mini = min(a-b, b-1);
  int maxi = max(a-b, b-1);
  int ans = mini*2 + maxi + 2*a + 1;
  return ans;
}


int main(){
  int a, b;
  cin>>a>>b;
  cout<<answer(a, b)<<endl;

}
