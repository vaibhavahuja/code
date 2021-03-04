//find number of instances of 'aaa'
// 1.overlapping allowed; 2.overlapping not allowed

#include <iostream>
using namespace std;

int overlappingAllowed(string s, int n){
  static int t = 0;
  if(n==0) return t;
  if(s[n-1] == 'a' && s[n] == 'a' && s[n+1] == 'a'){
    t++;
  }
  return overlappingAllowed(s,n-1);
}

int overlappingNotAllowed(string s, int n){
  static int t=0;
  if(n<=0) return t;
  if(s[n-1] == 'a' && s[n] == 'a' && s[n+1] == 'a'){
    t++;
    return overlappingNotAllowed(s,n-3);
  }
  return overlappingNotAllowed(s,n-1);
}


int main(){
  string s;
  cin>>s;
  int n = s.length();
  cout<<overlappingAllowed(s,n)<<endl;
  cout<<overlappingNotAllowed(s,n);

}
