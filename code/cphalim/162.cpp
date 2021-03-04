//too many complications

#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>

void show(vs a){
	for(int i = 0; i < a.size(); i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void move(vs &to, vs &from){
	vs ans;
	for(int i = 0; i < from.size(); i++){
		ans.push_back(from[i]);
	}

	for(int i = 0; i < to.size(); i++){
		ans.push_back(to[i]);
	}

	to = ans;
	from.clear();
}



int main(){
	int t = 52;
	// cin>>t;
	vs first;
	vs second;
	while(t--){
		string s;
		cin>>s;
		if(t%2 != 0) first.push_back(s);
		else second.push_back(s);
	}





	vs table;

	cout<<"input below"<<endl;
	show(first);
	show(second);
	show(table);
	cout<<endl;



	table.push_back(first[first.size() - 1]);
	first.pop_back();
	int chance = 1;
	int put = 1;
	int faceCard = 0;
	
	if(table[table.size() - 1][1] == 'J') put = 1, faceCard = 1;
	else if(table[table.size() - 1][1] == 'Q') put = 2, faceCard = 1;
	else if(table[table.size() - 1][1] == 'K') put = 3, faceCard = 1;
	else if(table[table.size() - 1][1] == 'A') put = 4, faceCard = 1;
	else put = 1, faceCard = 0;





	while(1){

		if(chance == 0){
			//it is first player chance to make a move

			if(put > first.size()) break;
			while(put--){
				table.push_back(first[first.size() - 1]);
				first.pop_back();
			}
			if(faceCard == 0){
				chance = 1-chance;
			}else if(faceCard == 1){
				faceCard = 0;
				move(second, table);
			}
		}else{
			//second player chance 

			if(put > second.size()) break;
			while(put--){
				table.push_back(second[second.size() - 1]);
				second.pop_back();
			}
			if(faceCard == 0){
				chance = 1-chance;
			}else if(faceCard == 1){
				faceCard = 0;
				move(first, table);
			}
		}

		if(table.size() >= 1){
			if(table[table.size() - 1][1] == 'J') put = 1, faceCard = 1;
			else if(table[table.size() - 1][1] == 'Q') put = 2, faceCard = 1;
			else if(table[table.size() - 1][1] == 'K') put = 3, faceCard = 1;
			else if(table[table.size() - 1][1] == 'A') put = 4, faceCard = 1;
			else put = 1, faceCard = 0;
		}else{
			put = 1;
			faceCard = 0;
		}
	show(first);
	show(second);
	show(table);
	cout<<endl;

		

	}
 
 	cout<<"final result below : "<<endl;
	show(first);
	show(second);
	show(table);
}