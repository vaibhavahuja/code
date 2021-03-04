#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
	int A; cin>>A;

	vector<string> ans;

    for(int i = 1; i <= A; i++){
        string temp = "";
        if(i%3 == 0) temp += "Fizz";
        if(i%5 == 0) temp += "Buzz";
        if(temp.size() == 0) temp += to_string(i);
        ans.push_back(temp);
    }
    show(ans);
  

}