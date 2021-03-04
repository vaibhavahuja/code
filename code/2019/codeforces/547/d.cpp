#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<char, vi>

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
    cout<<i->first<<" ==> ";
    show(i->second);
  }
}

void answer(string a, string b){

  mii table;
  for(int i = 0; i < a.length(); i++){
    table[a[i]].push_back(i);
  }

  mii table2;
  for(int i = 0; i < b.length(); i++){
    table2[b[i]].push_back(i);
  }
  //
  show(table);
  cout<<endl;
  show(table2);
  cout<<endl;
  vi ans1;
  vi ans2;
  for(auto i = table.begin(); i != table.end(); i++){
    char qw = i->first;
    if(qw == '?') continue;
    if(table2.find(qw) != table.end()){
      int p = table[i->first].size();
      int q = table2[i->first].size();
      int w = min(p, q);
      for(int j = 0; j < w; j++){
        ans1.push_back(table[i->first][j] + 1);
        ans2.push_back(table2[i->first][j] + 1);
        // table[i->first].erase(table[i->first].begin());
      }

    }
    if(table[qw].size() == 0) table.erase(qw);
    if(table2[qw].size() == 0) table2.erase(qw);

  }

  show(ans1);
  cout<<endl;
  show(ans2);
  cout<<endl;
  show(table);
  cout<<endl;
  show(table2);
  cout<<endl;


}

int main(){
  int t;
  cin>>t;
  string a, b;
  cin>>a>>b;
  answer(a, b);
}
