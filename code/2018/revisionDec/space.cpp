//finally correct answer


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define vs vector<string>
#define mii map<int, int>
#define mci map<char, int>
#define mis map<int, string>
#define mcc map<char, char>
#define mss map<string, string>

void answer(string a, vs n){
  mcc table;
  string b = "abcdefghijklmnopqrstuvwxyz";
  for(int i = 0; i < a.length(); i++){
    table[a[i]] = b[i];
  }
  mss table2;

  vs q;
  int m = 0;
  while(m < n.size()){
    string qw = "";
    int w = 0;
    while(w < n[m].length()){
      qw += table[n[m][w]];
      w++;
    }
    q.push_back(qw);
    table2[qw] = n[m];
    qw = "";
    m++;
  }
  sort(q.begin(), q.end());
  // for(auto i = table2.begin(); i != table2.end(); i++){
  //   cout<<i->first<<" "<<i->second<<endl;
  // }
    int p = 0;
    while (p < q.size()){
      cout<<table2[q[p]]<<" ";
      // cout<<q[p]<<" ";
      p++;
    }
}



// bool myFunc(string a, string b){
//   return a<b;
// }
//
// void answer(string a, vs n){
//   mci table;
//   for(int i = 0; i < a.length(); i++){
//     table[a[i]] = i;
//   }
//   // table
//
//   sort(n.begin(), n.end(), myFunc);
//
//   int p = 0;
//   while (p < n.size()){
//     cout<<n[p]<<" ";
//     p++;
//   }
// }

int main(){
  int q;
  cin>>q;
  string a;
  cin>>a;
  // a = "ecbdafghijklmnopqrstuvwyxz";
  vs b;
  while(q--){
    string p;
    cin>>p;
    b.push_back(p);
  }
   // b = {"purple", "purplc", "blue", "orange", "yel", "gre"};

  answer(a, b);
}
