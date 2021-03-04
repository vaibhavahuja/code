#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isVowel(char a){
  if(a == 'a') return true;
  if(a == 'e') return true;
  if(a == 'i') return true;
  if(a == 'o') return true;
  if(a == 'u') return true;

  return false;
}

int main(){
  string a, b;
  cin>>a>>b;
  if(a.length() != b.length()){
    cout<<"No"<<endl;
    return 0;
  }
  int ac = 0, cb = 0;
  for(int i = 0; i < a.length(); i++){
    if((isVowel(a[i]) && isVowel(b[i]))) ac++;
    if(!isVowel(a[i]) && !isVowel(b[i])) cb++;
  }
  if(ac+cb == a.length()) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
