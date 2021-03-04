#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void answer(string p){
  if(p.length() < 2){
    cout<<"NO"<<endl;
  }else if(p.length() == 2){
    if(p[1] - '0' > p[0] - '0'){
      cout<<"YES"<<endl;
      cout<<2<<endl;
      cout<<p[0]<<" "<<p[1]<<endl;
    }else cout<<"NO"<<endl;
  }else{
    string m = "";
    m += p[0];
    string n = "";
    int o = 1;
    while(o < p.length()){
      n += p[o];
      o++;
    }
    cout<<"YES"<<endl;
    cout<<2<<endl;
    cout<<m<<" "<<n<<endl;

  }

}


int main(){
  int t;
  cin>>t;
  while(t--){
    string p;
    int qw;

    cin>>qw>>p;
    answer(p);
  }
}
