//accepted

#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<string, long long int>

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

bool check(string a){
  map<long long int, long long int> table;
  for(long long int i = 0; i < a.size(); i++){
    if(a[i] == 'a'){
      table['a'] = 1;
    }else if(a[i] == 'e'){
      table['e'] = 1;
    }else if(a[i] == 'i'){
      table['i'] = 1;
    }else if(a[i] == 'o'){
      table['o'] = 1;
    }else if(a[i] == 'u'){
      table['u'] = 1;
    }
  }
  if(table.size() == 5) return  true;
  return false;
}

string vowel(string s){
  long long int i = 0;
  long long int a=0, e=0, I=0, o=0, u=0;
  string sum = "z";
  while(i < s.length()){
    if(s[i] == 'a' && a == 0){
      sum += "a";
      a = 1;
    }else if(s[i] == 'e' && e == 0){
      sum += "e";
      e = 1;
    }else if(s[i] == 'i' && I == 0){
      sum += "i";
      I = 1;
    }else if(s[i] == 'o' && o == 0){
      sum += "o";
      o = 1;
    }else if(s[i] == 'u' && u == 0){
      sum += "u";
      u = 1;
    }
    i++;
  }
  sort(sum.begin(), sum.end());
  return sum;
}

int main(){
  long long int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
    mii table;

    while(n--){
      string s;
      cin>>s;
      table[vowel(s)] += 1;
    }

    // show(table);
    // cout<<endl;
    long long int ans = 0;
    for(auto i = table.begin(); i != table.end(); i++){
      for(auto j = i; j != table.end(); j++){
        if(i != j){
          string m = "";
          long long int p = i->second*j->second;
          m += i->first;
          m += j->first;
          // cout<<m<<endl;
          if(check(m)) ans+=p;
        }
      }
    }

    for(auto i = table.begin(); i != table.end(); i++){
      if(check(i->first)) ans += (((i->second)*(i->second - 1))/2);
    }
    cout<<ans<<endl;
  }

}
