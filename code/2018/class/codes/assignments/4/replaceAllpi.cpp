#include <iostream>
using namespace std;

void replaceAll(string s, int n){
  if(n<=0) return;

  replaceAll(s,n-1);
  if(s[n-1] == 'p' && s[n] == 'i'){
    cout<<3.14;
  }
  else if(s[n-2] == 'p' && s[n-1] == 'i'){

  }
  else{
    cout<<s[n-1];
  }

}


int main(){
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    int n = s.length();

    replaceAll(s,n);
    cout<<endl;
  }

}
