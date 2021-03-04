#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int sol(int x, int n, int d){
	if(x == 0) return 0;
	if(n == 0){
		return 1;
	}else if(n == 1) return (x+d)%d;
	
	int ans = (x+d)%d; n--;
	
	while(n > 0){
		// cout<<n<<endl;
		if(n%2 == 0){
			ans = (((ans+d)%d)*((ans+d)%d))%d;
			ans = (ans+d)%d;
			n/=2;
		}else{
			ans = (((ans+d)%d)*(x))%d;
			ans = (ans+d)%d;
			n--;
		}
	}
	return (ans+d)%d;
}


int main(){
  ios_base::sync_with_stdio(false);

  // int x = 2, n = 3, d = 3;
  int x, n, d; cin>>x>>n>>d;
  cout<<sol(x, n, d)<<endl;

}