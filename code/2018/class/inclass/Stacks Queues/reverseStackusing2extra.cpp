#include <iostream>
#include <stack>
using namespace std;

void showstack(stack <int> s){
  stack <int> p = s;
  while(!p.empty()){
    cout<<" "<<p.top();
    p.pop();
  }
  cout<<endl;
}

stack <int> shift(stack <int> s){
  stack <int> p;
  while(!s.empty()){
    p.push(s.top());
    s.pop();
  }
  return p;
}

void reverseStackUsingTwo(stack <int> &s){
  stack <int> p = shift(s);
  stack <int> m = shift(p);
  s = shift(m);
}


int main(){
  stack <int> s;
  s.push(3);
  s.push(5);
  s.push(7);
  s.push(2);
  showstack(s);
  // stack <int> p = shift(s);
  reverseStackUsingTwo(s);
  showstack(s);
}
