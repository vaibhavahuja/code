//correct answer
//https://www.codechef.com/COOK101B/problems/CAMPON
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

void answer(mii &table, vi d, vi p){
  // mii table;
  for(int i = 1; i <= 31; i++){
    table[i] = 0;
  }

  for(int i = 0; i < d.size(); i++){
    table[d[i]] = p[i];
  }

  // show(table);
  int sum = 0;
  for(auto i = table.begin(); i != table.end(); i++){
    table[i->first] += sum;
    sum = table[i->first];
  }
  // show(table);
}

int main(){
  int t;
  cin>>t;
  while(t--){
    vi d;
    // = {10, 14, 31};
    vi p;
    // = {5, 4, 1};
    mii table;
    int q;
    cin>>q;
    while(q--){
      int a, b;
      cin>>a>>b;
      d.push_back(a);
      p.push_back(b);
    }
    answer(table, d, p);
    // show(table);

    int ab;
    cin>>ab;
    while(ab--){
      int v, c;
      cin>>v>>c;
      if(table[v] >= c){
        cout<<"Go Camp"<<endl;
      }else cout<<"Go Sleep"<<endl;
    }
  }
}
