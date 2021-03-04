#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define vi vector<int>
#define mii map<int, vi>


int main(){
  int n;
  cin>>n;
  mii home;
  vi away;
  for(int i = 0; i < n; i++){
    int a, b;
    cin>>a>>b;
    home[a].push_back(i);
    away.push_back(b);
  }

  for(int i = 0; i < n; i++){
    int c = (n-1), d = (n-1);
    if(home.find(away[i]) != home.end()){
      d  -= home[away[i]].size();
      c += home[away[i]].size();
    }
    cout<<c<<" "<<d<<endl;

  }
}
