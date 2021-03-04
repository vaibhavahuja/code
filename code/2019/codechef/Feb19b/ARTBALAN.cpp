#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define vi vector<int>
#define mci map<char, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

int answer(vi a){
  int sum = 0;
  vi fac;
  for(int i = 0; i < a.size(); i++){
    sum += a[i];
  }

  for(int i = 1; i <= sum/2; i++){
    if(sum%i == 0 && sum/i < 27) fac.push_back(i);
  }
  fac.push_back(sum);

  // show(fac);
  //1 2 4
  //1 1 2
  int pos = 0, neg = 0;
  for(int j = 0; j < fac.size(); j++){
    cout<<fac[j]<<"    ";
    for(int i = 0; i < a.size(); i++){
      int ab = 0;
      ab = min(fac[j] - a[i], a[i]);
      if(ab < 0) pos += ab;
      else neg += ab;
    }
    cout<<pos<<" "<<neg<<endl;
    pos = 0;
    neg = 0;
  }
  return 0;

}


int main(){
  string s = "abcb";
  // cin>>s;
  mci table;
  for(int i= 0; i <s.length(); i++){
    table[s[i]] += 1;
  }
  vi a;
  for(auto i = table.begin(); i != table.end(); i++){
    a.push_back(i->second);
  }
  sort(a.begin(), a.end());
  show(a);
  cout<<answer(a)<<endl;




}
