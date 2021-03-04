#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define vs vector<string>
#define mss map<string, string>

void genMap(mss &table){
  int n;
  cin>>n;
  while(n--){
    string a, b;
    cin>>a>>b;
    if(a.length() > b.length()) table[a] = b;
    else table[a] = a;
  }
}

int main(){
  mss table;
  int m;
  cin>>m;
  genMap(table);
  vs p;
  while(m--){
    string q;
    cin>>q;
    p.push_back(q);
  }

  for(int j = 0; j < p.size(); j++){
    cout<<table[p[j]]<<" ";
  }
  // for(auto i = table.begin(); i != table.end() ; i++){
  //   cout<<i->first<<" "<<i->second<<endl;
  // }

}
