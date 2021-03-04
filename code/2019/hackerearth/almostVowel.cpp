#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

vi answer(string s){
  vi a;
  int i = 0, j = 0;
  while(i < s.length()){
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
      j++;
    }else{
      if(j != 0) a.push_back(j);
      j = 0;
    }
    i++;
  }
  return a;
}

int main(){
  int t;
  cin>>t;
  while(t--){

    string s;
    cin>>s;
    vi a = answer(s);
    sort(a.begin(), a.end());
    int ans = 0;
    if(a.size() == 1) ans = a[0];
    else{
      ans += a[a.size() - 2];
      ans += a[a.size() - 1];
    }
    cout<<ans<<endl;
  }

}
