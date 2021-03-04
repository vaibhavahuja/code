

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define vs vector<string>
#define msi map<string, int>

void store(msi &table, vs a){
  for(int i = 0; i < a.size(); i++){
    table[a[i]] = i+1;
  }
}



int main(){
  // vs a = {"xyz", "abc", "foo"};
  int j;
  cin>>j;
  vs a;
  while(j--){
    string q;
    cin>>q;
    a.push_back(q);
  }
  msi table;
  store(table, a);

  sort(a.begin(), a.end());

  for(int i = 0; i < a.size(); i++){
    cout<<table[a[i]]<<" ";
  }
  cout<<endl;



}
