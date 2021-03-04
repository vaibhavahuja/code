#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int isPos(int a, int candy, int star){
  // cout<<a<<endl;
  if(a < 0){
    // cout<<candy+star<<endl;
    if(candy + star >= abs(a)) return 1;
    else return -1;
  }
  else if(a > 0){
    if(star == 0) return -1;
    return 1;
  }
  else if(a == 0) return 1;
}



string answer2(string a, int k, int diff, int star, int candy){
  // cout<<diff<<endl;


  int len = a.length() - star - candy;
  string ans = "";

  if(diff < 0){
    // cout<<diff<<endl;
    int mqw = abs(diff);
    for(int i = 0; i<a.length(); i++){
      if(a[i] != '?') {
        if(a[i] != '*') ans += a[i];
      }
      if(a[i] == '?' && mqw > 0){
        ans.erase(ans.end()-1);
        mqw--;
      }
      if(a[i] == '*' && mqw > 0){
        ans.erase(ans.end()-1);
        mqw--;
      }
    }
    if(ans.length() == len + diff) return ans;

  }
  if(diff == 0){
    for(int i = 0; i<a.length(); i++){
      if(ans.length() == len + diff) return ans;
      if(a[i] != '?') {
        if(a[i] != '*') ans += a[i];
      }
    }
  }
  if(diff > 0){
    int ind = 0;
    for(int i = a.length() - 1; i>=0; i--){
      if(a[i] == '*'){
        ind = i-1;
        break;
      }
    }

    // cout<<ind<<endl;
    for(int i = 0; i<a.length(); i++){
      // if(ans.length() == len + diff) return ans;
      if(a[i] != '?') {
        if(a[i] != '*') ans += a[i];
      }
      if(i == ind){
        while(diff--){
          ans += a[i];
        }
      }
    }
    return ans;
    // if(ans.length() == len + diff) return ans;
  }
}


string answer(string a, int k){
  int star = 0, candy = 0;
  for(int i = 0; i < a.length(); i++){
    if(a[i] == '*') star++;
    if(a[i] == '?') candy++;
  }
  int m = -a.length() + k + candy + star;

  if(isPos(m, candy, star) == 1){
    return answer2(a, k, m, star, candy);
  }else return "Impossible";



}

int main(){

  string a;
  int m;
  cin>>a>>m;
  cout<<answer(a, m)<<endl;
}
