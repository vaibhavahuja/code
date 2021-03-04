
#include <iostream>
#include <algorithm>
using namespace std;


int countHi(string s, int n){
  static int t=0;
  if(n <= 1) return t;
  if(s[n-2] == 'h' && s[n-1] == 'i'){
    if(s[n] != 't'){
      t++;
    }
  }
  return countHi(s,n-1);
}

void removeHi(string s, int n){
  if(n==0) return;
  removeHi(s,n-1);
  if(s[n-1] == 'h' && s[n] == 'i' && s[n+1] != 't'){
    cout<<"";
  }
  else if(s[n-1] == 'i' && s[n-2] == 'h' && s[n]!='t'){
    cout<<"";
  }
  else{
    cout<<s[n-1];
  }

}

void replaceHi(string s, int n){
  if(n==0) return;
  replaceHi(s,n-1);
  if(s[n-1] == 'h' && s[n] == 'i' && s[n+1] != 't'){
    cout<<"bye";
  }
  else if(s[n-1] == 'i' && s[n-2] == 'h' && s[n]!='t'){
  }
  else{
    cout<<s[n-1];
  }

}





int main(){
    string s;
    cin>>s;
    int n = s.length();
    cout<<countHi(s,n)<<endl;
    removeHi(s,n);
    cout<<endl;
    replaceHi(s,n);

}
