#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define vi vector<int>
#define miv map<int, vi>

void answer(vi a, vi b, miv &table){
  int q = 0;
  int asize = a.size(), bsize = b.size();

  for(int i = 0; i < a.size(); i++){
    for(int j = 0; j < b.size(); j++){
      vi q = {i,j};
      table[a[i] + b[j]] = q;
      if(table.size() == asize + bsize - 1) return;
    }
  }
}

int main(){
  // vi a = {10,1,100};
  // vi b = {4,3};
  miv table;

  int n, m;
  cin>>n>>m;
  vi a,b;
  while(n--){
    int q;
    cin>>q;
    a.push_back(q);
  }
  while(m--){
    int qw;
    cin>>qw;
    b.push_back(qw);
  }
  answer(a, b, table);

  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->second[0]<<" "<<i->second[1]<<endl;
  }

}
