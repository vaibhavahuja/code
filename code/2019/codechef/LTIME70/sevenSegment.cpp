//solving for 20 points when N = 1;
//to solve for 100 points later

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


int main(){
  mii table;
  vi a = {6,2,5,5,4,5,6,3,7,6};
  for(int i = 0; i < a.size(); i++){
    table[i] = a[i];
  }
  // show(table);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    while(n--){
      int x, y;
      cin>>x>>y;

      if(y > table[x]) cout<<"invalid"<<endl;
      else{
        int m1 = table[x] - y;
        cout<<min(m1, 7 - y)<<" "<<max(m1, 7 - y)<<endl;
      }
    }
  }
}



1101101 -- 4
1011011 -- 4
