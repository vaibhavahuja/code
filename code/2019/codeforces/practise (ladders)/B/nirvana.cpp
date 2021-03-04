#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

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

long long int calc(string s){
  long long int ans2 = 1;
  for(long long int i = 0; i < s.length(); i++){
    ans2 *= (s[i] - '0');
  }
  return ans2;
}

void answer(string s){
  if(s.length() == 1){
    cout<<s<<endl;
    return;
  }
  long long int finalans = calc(s);
  for(long long int i = 0; i < s.length(); i++){
    if(s[i] == '0') continue;
    long long int ans = 1;
    for(long long int j = 0; j < i; j++){
      ans *= (s[j] - '0');
    }

    if(s[i] - '0' != 1) ans *= (s[i]-'0') - 1;

    ans *= pow(9, s.length() - i - 1);
    finalans = max(ans, finalans);
  }
  cout<<finalans<<endl;
}



int main(){
  string s;
  cin>>s;
  answer(s);

}
