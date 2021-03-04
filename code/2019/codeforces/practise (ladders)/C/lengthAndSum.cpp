#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string getMin(int num, int rem, int n){
  string s;
  if (rem == 0){
    num -= 1;
    rem += 9;
  }

  while(num--){
    s += '9';
    n--;
  }
  // cout<<n<<endl;


  if(n == 1) s += to_string(rem);
  else{
    s += to_string(rem - 1);
    n--;
    while(n > 1){
      s += '0';
      n--;
    }
    s += '1';
  }



  reverse(s.begin(), s.end());
  return s;
}


string getMax(int num,int rem,int n){
  string s = "";
  while(num--){
    s += '9';
    n--;
  }
  if(rem != 0) {
    s += to_string(rem);
    n--;
  }
  while(n--){
    s += '0';
  }
  return s;
}

int main(){
  int n, s;
  cin>>n>>s;
  int num = s/9;
  int rem = s%9;
  if(s == 0 && n == 1) cout<<0<<" "<<0<<endl;
  else if(s == 0 && n != 0 && n != 1) cout<<-1<<" "<<-1<<endl;
  // else if(s != 0 && n == 1 && s >= 10) cout<<-1<<" "<<-1<<endl;
  else if( s != 0 && n*9 < s) cout<<-1<<" "<<-1<<endl;
  // cout<<getMin(num, rem, n);
  else cout<<getMin(num, rem, n)<<" "<<getMax(num, rem, n)<<endl;

}
