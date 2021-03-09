#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
map<int, char> table;
vi nums = {1, 5, 10, 50, 100, 500, 1000};

vi split(int p){
	vi ans; 
	int m = 1;
	while(p > 0){
		ans.push_back(m*(p%10));
		m*=10;
		p/=10;
	}
	return ans;
}

string convert(int a){
	string s = "";
	int m = a;
	if(a == 0) return "";
	int len = 0, firstChar;
	while(a > 0){
		firstChar = a%10;
		a/=10;
		len++;
	}
	vi temp = {1, 5, 10, 50, 100, 500, 1000, 10000};
	if(firstChar == 4){
		s += table[pow(10, len-1)];
		s += table[5*pow(10, len-1)];
	}else if (firstChar == 9){
		s += table[pow(10, len-1)];
		s += table[pow(10, len)];
	}else{
		while(m > 0){
			int low = lower_bound(temp.begin(), temp.end(), m) - temp.begin();
			if(temp[low] > m) low--;

			s += table[temp[low]];
			m-=temp[low];
		}
	}

	return s;
}



int main(){
  ios_base::sync_with_stdio(false);

  table[1] = 'I';
  table[5] = 'V';
  table[10] = 'X';
  table[50] = 'L';
  table[100] = 'C';
  table[500] = 'D';
  table[1000] = 'M';
  int n = 3998;
  vi q = split(n);
  sort(q.begin(), q.end(), greater<int>());
  string ans = "";
  for(int i = 0; i < q.size(); i++){
  	ans += convert(q[i]);
  }
  cout<<ans<<endl;
  // show(split(3998));

}

