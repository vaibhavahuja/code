#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void show(queue<char> q){
	queue<char> qq = q;
	while(!qq.empty()){
		cout<<qq.front()<<" ";
		qq.pop();
	}
	cout<<endl;
}

int answer(string a, string b){
  if(a.size() == 0 || b.size() == 0) return -1;
  string c = "";
  queue<char> q;  
  for(int i = 0; i < b.size(); i++){
  	q.push(b[i]);
  }
  // show(q);
  if(a.size() < b.size()){
  	return -1;
  }
  if(a.size() == b.size()){
  	return (a==b)?0:-1;
  }
  queue<char> qq;
  for(int i = 0; i < a.size(); i++){
  	if(i < b.size()) qq.push(a[i]);
  	else{
  		if(q == qq) return (i-b.size());
  		else{
  			qq.pop();
  			qq.push(a[i]);
  		}
  	}
  	show(qq);
  }

  return -1;
}

int main(){
  ios_base::sync_with_stdio(false);
  
  string a = "vaibhavahuja";
  string b = "";
  cout<<answer(a, b)<<endl;

}
