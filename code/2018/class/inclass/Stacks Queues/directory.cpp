#include <iostream>
#include <stack>
using namespace std;

void show(stack <char> s){
  stack <char> p;
  while(!s.empty()){
    p.push(s.top());
    s.pop();
  }
  while(!p.empty()){
    cout<<p.top()<<"";
    p.pop();
  }
  cout<<endl;
}




stack <char> check(string p){
  stack <char> s;
  for(int i=0;i<p.length();i++){
    s.push(p[i]);
    if(p[i] == '.'){
      if(s.top() == '.'){
        while(s.top() != '/'){
          s.pop();
        }
        s.pop();
      }
      else{
        while(s.top() != '/'){
          s.pop();
        }
      }
    }
    if(p[i] == '/'){
      if(s.top() == '/'){
        while(s.top() == '/'){
          s.pop();
        }
        s.push('/');
      }
    }

  }
  return s;
};



int main(){
  string s = "vaonjab/../v/../as/vas/./.as/./";
  show(check(s));
  // cout<<m;

}
