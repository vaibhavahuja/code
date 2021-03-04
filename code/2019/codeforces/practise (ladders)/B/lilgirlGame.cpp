#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define vi vector<int>
#define mci map<char, int>

void show(mci table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

void showv(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void ans(string s){
  mci table;
  for(int i = 0; i < s.length(); i++){
    table[s[i]] += 1;
  }
  // int odd = 0, even = 0;
  vi odd, even;
  for(auto i = table.begin(); i != table.end(); i++){
    (i->second%2!=0)?odd.push_back(i->second):even.push_back(i->second);
  }

  if(odd.size() < 2) cout<<"First"<<endl;
  else{
    if(odd.size() % 2 == 0) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
  }

}

int main(){
  string s;
  cin>>s;
  ans(s);



}
