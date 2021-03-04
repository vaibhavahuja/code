#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>
#define mcv map<char, vs>
#define mci map<char, int>

void show2(vs a){
	int i = 0;
	while(i < a.size()){
		cout<<a[i]<<" ";
		i++;
	}
	cout<<endl;
}
void show(mcv a){
	for(auto i = a.begin(); i !=  a.end(); i++){
		cout<<i->first<<" ";
		show2(i->second);
	}
}

int rank1(mcv faceCards, mcv suits){
	int p = 0;
	p += 4*faceCards['A'].size();
	p += 3*faceCards['K'].size();
	p += 2*faceCards['Q'].size();
	p += faceCards['J'].size();
	return p;
}


int rank24(mcv faceCards, mcv suits){
	int p = 0;

	//rule2
	vs king = faceCards['K'];

	for(int i = 0; i < king.size(); i++){
		if(suits[king[i][1]].size() == 1) p--;
	}

	//rule3
	vs queen = faceCards['Q'];
	for(int i = 0; i < queen.size(); i++){
		if(suits[queen[i][1]].size() == 1) p--;
		else if(suits[queen[i][1]].size() == 2) p--;
	}

	vs jack = faceCards['J'];
	for(int i = 0; i < jack.size(); i++){
		if(suits[jack[i][1]].size() == 1) p--;
		else if(suits[jack[i][1]].size() == 2) p--;
		else if(suits[jack[i][1]].size() == 3) p--;
	}

	return p;
}


int rank57(mcv faceCards, mcv suits){
	int p = 0;

	vector<char> suit = {'D', 'S', 'H', 'C'};

	for(int i = 0; i < suit.size(); i++){
		if(suits[suit[i]].size() == 2) p += 1;
		else if(suits[suit[i]].size() == 1) p += 2;
		else if(suits[suit[i]].size() == 0) p += 2;
				
	}
	return p;
}


int find(char a, vs b){
	int p = 0;
	for(int i = 0; i < b.size(); i++){
		if(b[i][0] == a) p++;
	}
	return p;
}


bool stopped(mcv faceCards, mcv suits){
	int p = 0;
	vector<char> suit = {'D', 'S', 'H', 'C'};
	for(int i = 0; i < suit.size(); i++){
		if(find('A', suits[suit[i]]) == 0 && find('Q', suits[suit[i]]) == 0 && find('K', suits[suit[i]]) == 0) p += 0;
		else if(find('A', suits[suit[i]]) > 0) p++;
		else if(suits[suit[i]].size() - find('K', faceCards[suit[i]]) >= 1) p++;
		else if(suits[suit[i]].size() - find('Q', faceCards[suit[i]]) >= 2) p++;
	}
	return(p==4?true:false);
}


int main(){
	string wwp;
	while(getline(cin, wwp)){
		// int t = 13;
		string em = wwp;
		vs a;
		string qe = "";
		for(int i = 0; i < wwp.length(); i++){
			if(wwp[i] == ' '){
				a.push_back(qe);
				qe = "";
			}else qe += wwp[i];
		}
		a.push_back(qe);

		// show2(a);
		// while(t--){
		// 	string p;
		// 	cin>>p;
		// 	a.push_back(p);
		// }

		mcv suits;
		suits['S'] = {};
		suits['D'] = {};
		suits['C'] = {};
		suits['H'] = {};
		
		for(int i = 0; i < a.size(); i++){
			suits[a[i][1]].push_back(a[i]);
		}

		// show(suits);

		mcv faceCards;
		faceCards['K'] = {};
		faceCards['Q'] = {};
		faceCards['J'] = {};
		faceCards['A'] = {};
		for(int i = 0; i < a.size(); i++){
			if(a[i][0] == 'K') faceCards[a[i][0]].push_back(a[i]);
			if(a[i][0] == 'Q') faceCards[a[i][0]].push_back(a[i]);
			if(a[i][0] == 'J') faceCards[a[i][0]].push_back(a[i]);
			if(a[i][0] == 'A') faceCards[a[i][0]].push_back(a[i]);
		}

		// show(faceCards);



		int points = 0;

		points += rank1(faceCards, suits);
		points += rank24(faceCards, suits);
		points += rank57(faceCards, suits);


		if(points < 14) cout<<"PASS"<<endl;
		else if(points - rank57(faceCards, suits) >= 16 && stopped(faceCards, suits)){
			cout<<"BID NO TRUMP"<<endl;
		}else if(points >= 14){
			cout<<"BID ";

			string w = "SHDC";
			char greatest = 'S';
			for(int i = 0; i < w.length(); i++){
				if (suits[w[i]].size() > suits[greatest].size()){
					greatest = w[i];
				}
			}

			cout<<greatest<<endl;

		}


		wwp = "";
	}
	
	



}