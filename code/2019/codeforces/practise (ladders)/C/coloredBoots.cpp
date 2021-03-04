#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>
#define pci pair<char, int>
#define vp vector<pci>



void show(vp a){
  int i = 0;
  while(i < a.size()){
    // cout<<a[i].first<<" "<<a[i].second<<endl;
    cout<<a[i].first;
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


void answer(vp left, vp right);


int main(){
	string a, b;
	// a = "bambarbia";
	// b = "hellocode";
	// a = "codeforces";
	// b = "dodivthree";
	// a = "abaca?b";
	// b = "zabbbcc";
	// a = "code??????";
	// b = "??????test";
	int t;
	cin>>t;
	cin>>a>>b;


	vp left, right;
	for(int i = 0; i < a.length(); i++){
		pci g;
  		g.first = a[i];
  		g.second = i+1;
		left.push_back(g);
	}

  	for(int i = 0; i < b.length(); i++){
  		pci g;
  		g.first = b[i];
  		g.second = i+1;
  		right.push_back(g);
	}

	sort(left.begin(), left.end());
	sort(right.begin(), right.end());
	// show(left);
	// show(right);


	answer(left, right);

}

//done for without ? using two pointers

void answer(vp left, vp right){
	vi anslt, ansrt;
	int i = 0, j = 0;
	while(i < left.size() && j < right.size()){
		if(left[i].first == '?' && right[j].first == '?'){
			i++, j++;
			continue;
		} 

		else if(left[i].first == '?' && right[j].first != '?'){
			i++;
			continue;
		}else if(left[i].first != '?' && right[j].first == '?'){
			j++;
			continue;
		}
		if(left[i].first == right[j].first){
			anslt.push_back(left[i].second);
			ansrt.push_back(right[j].second);
			left.erase(left.begin() + i);
			right.erase(right.begin() + j);
		}else if(left[i].first > right[j].first){
			j++;
		}else if(left[i].first < right[j].first){
			i++;
		}
	}


	//above this part i am done with
	//generating solution for without q marks
	//amd now i have two strings with q marks
	//solution part 2 below 

	//will do ini a bit


	// cout<<endl;
	// show(left);
	// cout<<endl;
	// show(right);


	// cout<<endl;
	reverse(left.begin(), left.end());
	// show(left);

	//this should take care of the latter

	for(int i = 0; i < left.size(); i++){
		if(left[i].first == '?' || right[i].first == '?'){
			anslt.push_back(left[i].second);
			ansrt.push_back(right[i].second);
		}else continue; 
	}

	cout<<anslt.size()<<endl;

	for(int i = 0; i < anslt.size(); i++){
		cout<<anslt[i]<<" "<<ansrt[i]<<endl;
	}

}














