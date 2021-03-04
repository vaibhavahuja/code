#include <iostream>
using namespace std;

void printX(int n){
  if(n<=0) return;
  cout<<'x';
  printX(n-1);
}


void moveAllX(string s, int n){
  static int p = n;
  if(n<=0) return;
  moveAllX(s,n-1);
  if(s[n-1] != 'x'){
    p--;
    cout<<s[n-1];
  }
  if(n==s.length()){
    printX(p);
  }



}

int main(){
  string s;
  cin>>s;
  moveAllX(s,s.length());


}
