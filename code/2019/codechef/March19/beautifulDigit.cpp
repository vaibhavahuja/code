//finally accepted

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<char, int>


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

string answer(string a, char b){
  int count = 0;
  string c = "";
  for(int i = 0; i < a.size(); i++){
    if(a[i] < b) c+=a[i];
    else count++;
  }

  mii table; //will contain last index of every small num
  for(int i = 0; i < c.size(); i++){
    table[c[i]] = i;
  }
  // cout<<c<<endl;
  // show(table);
  // cout<<count<<endl;
  string d = "";
  int p = 0;
  for(auto i = table.begin(); i != table.end(); i++){
    char min = i->first;
    int last = i->second;
    if(last < p) continue;
    if(last >= c.length()) break;
    if(p >= c.length()) break;
    for(int j = p; j <= last; j++){
      if(c[j] == min) d+=c[j];
      else count++;
      // cout<<d<<endl;
    }
    p = last+1;
  }

  while(count--){
    d += b;
  }



  return d;
}

// 234789742435467 6

// 1 12638124812378264712328146 6
// 1111146666666666666666666666



int main(){
  int t;
  cin>>t;
  while(t--){
    string a;
    char b;
    cin>>a>>b;
    cout<<answer(a, b)<<endl;
  }
}
