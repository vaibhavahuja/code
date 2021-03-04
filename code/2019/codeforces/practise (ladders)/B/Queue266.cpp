#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string update(string s){
  string p = "";
  for(int i = 0; i < s.length() - 1; i++){
    if(s[i] == 'B' && s[i+1] == 'G'){
      swap(s[i], s[i+1]);
      i++;
    }
    // cout<<s<<endl;
  }
  return s;
}



int main(){
  // string a = "BGGBG";
  int p;
  int t;
  string a;

  cin>>p>>t>>a;

  while(t--){
    a = update(a);
  }
  cout<<a<<endl;
  // cout<<update(a)<<endl;

}
