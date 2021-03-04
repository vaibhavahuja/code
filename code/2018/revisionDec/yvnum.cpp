
//wont work
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string answer(int n){
  string s = to_string(n);
  string ans = s;
  int a = 0, b = 1;
  while(b < s.length()){
    string q = "";
    for(int i = b; i < s.length(); i++){
      q += s[i];
    }
    for(int i = 0; i <= a; i++){
      q += s[i];
    }
    // cout<<q<<endl;
    ans += q;
    b++;
    // s = q;
    a++;
  }
  return ans;
  // int fin = stoi(ans);

  // cout<<ans<<endl;
  // return fin;
}

int main(){

  // unsigned long long int o = ((123*1000000000)%1000000007 + 231*1000000%1000000007 + 312%1000000007)%1000000007;
  // cout<<o;
  int q = 1000000007;
  int a = (12345 * 10000000000%q *100000%q)%q;
  // long long int b = 12345000000000000000%q;
  cout<<a<<endl;
  cout<<b<<endl;


  // int t;
  // cin>>t;
  // while(t--){
  //   int n;
  //   cin>>n;
  //   cout<<answer(n)<<endl;
  //   // %1000000007<<endl;
  // }

}
