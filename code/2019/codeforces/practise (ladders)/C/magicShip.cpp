#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>


void show(vi a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

vi prefix(vi a){
  long long int m = 0;
  long long int i = 0;
  vi p;
  while(i < a.size()){
    p.push_back(m + a[i]);
    m = p[p.size() - 1];
    i++;
  }
  return p;
}



long long int answer(long long int n, vi prex, vi prey, long long int x, long long int y, long long int x2, long long int y2){
  long long int mini = 0;
  long long int maxi = 1e18;
  long long int k;
  long long int ans = 1e18;
  //getting correct answer if i replace 1e9 with small number; see once;
  while(mini < maxi){
    k = (mini + maxi)/2;
    long long int a = k/n;
    long long int b = k%n;
    // cout<<a<<" "<<b<<endl;
    long long int x3 = x + prex[prex.size() - 1]*a;
    x3 += (b < 1)?0:prex[b-1];
    long long int y3 = y + prey[prey.size() - 1]*a;
    y3 += (b < 1)?0:prey[b-1];
    // cout<<k<<" "<<x3<<" "<<y3<<endl;
    if(abs(x3-x2) + abs(y3-y2) <= k){
      ans = min(ans, k);
      maxi = k;
    }else mini = k+1;
  }
  if(ans == 1e18) return -1;
  return ans;
}





int main(){
  long long int x, y;
  long long int x2, y2;
  cin>>x>>y;
  cin>>x2>>y2;


  long long int n;
  cin>>n;
  string s;
  cin>>s;

  vi posx, posy;

  for(long long int i = 0; i < s.length(); i++){
    long long int x = 0, y = 0;
    if(s[i] == 'U') y = 1;
    else if(s[i] == 'D') y = -1;
    else if(s[i] == 'R') x = 1;
    else if(s[i] == 'L') x = -1;
    posx.push_back(x);
    posy.push_back(y);
  }

  vi prex = prefix(posx);
  vi prey = prefix(posy);

  cout<<answer(n, prex, prey, x, y, x2, y2);

}
