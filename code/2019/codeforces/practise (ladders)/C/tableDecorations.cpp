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


int main(){
  long long int a, b, c;
  cin>>a>>b>>c;

  vi ans = {a,b,c};
  sort(ans.begin(), ans.end());

  if(ans[2]/2 >= ans[0] + ans[1]){
    cout<<ans[0] + ans[1]<<endl;
    return 0;
  }else if(ans[2]/2 < ans[0] + ans[1]){
    cout<<(ans[0] + ans[1] + ans[2])/3<<endl;
    return 0;
  }



}
