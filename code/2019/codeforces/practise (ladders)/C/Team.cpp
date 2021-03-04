#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string answer(int n, int m){
  if(m > 2*n + 2) return "-1";
  if(m < n-1) return "-1";
  string p = "";
  int zero = n, one = m;
  if(one >= zero){
    while(zero){
      p += '1';
      one--;
      p += '0';
      zero--;
      }
      if(one > 0){
        p += '1';
        one--;
      }
      if(one == 0) return p;
      if(one > 0){
        string q = "";
        for(int i = 0; i < p.length(); i++){
          if(p[i] == '1' && one > 0){
            q += "11";
            one--;
          }else q += '0';
          if(one == 0){
            i++;
            while(i < p.length()){
              q += p[i];
              i++;
            }
            return q;
          }
        }
      }
      // cout<<p<<" "<<one<<endl;
    }


  zero = n;
  one = m;

  if(zero > one){
    while(zero--){
      p += '0';
      if(one > 0){
        p += '1';
        one--;
      }
    }
    return p;
  }


}


int main(){
  int n, m;
  cin>>n>>m;
  cout<<answer(n, m);

}
