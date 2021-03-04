//AC

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool exist(string a, string b, int m, int n){
  if(m == 0) return true;
  if(n == 0) return false;

  if(a[m-1] == b[n-1]){
    return exist(a, b, m-1, n-1);
  }
  return exist(a, b, m, n-1);
}

string answer(string s, string t){
  string a = s, b = t;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  if(a == b) return "array";

  a = s;
  b = t;

  if(exist(b, a, b.length(), a.length())) return "automaton";

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  a = s;
  b = t;

  if(exist(b, a, b.length(), a.length())) return "both";

  return "need tree";


}

int main(){
  string a, b;
  cin>>a>>b;
  cout<<answer(a, b);

}
