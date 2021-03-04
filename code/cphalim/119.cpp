#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>
#define msi map<string, int>

void show(msi table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


int main(){
	int t;
	// cin>>t;
	while(cin>>t){
		int q = t;
		msi table;
		vs printOrder;
		while(t--){
			string s;
			cin>>s;	
			printOrder.push_back(s);
			table[s] = 0;
		}
		while(q--){
			string a;
			int b, c;
			cin>>a>>b>>c;
			table[a] -= b;
			int amountAdd;
			if(c != 0) {
				amountAdd = b/c;
				table[a] += b%c;
			}
			else {
				amountAdd = 0;
				table[a] += b;
			}


			while(c--){
				string d;
				cin>>d;
				table[d] += amountAdd;
			}
		}
		for(int o = 0 ; o < printOrder.size(); o++){
			cout<<printOrder[o]<<" "<<table[printOrder[o]]<<endl;
		}

  }

}














