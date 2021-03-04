#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void insertionSort(vi &a){
	for(int i = 1; i < a.size(); i++){
		int key = a[i], j = i-1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}

//MERGE SORT BEGIN
vi merge(vi left, vi right){
	vi temp;
	int i = 0, j = 0, k = 0;
	while(i < left.size() && j < right.size()){
		if(left[i] <= right[j]){
			temp.push_back(left[i]);
			k++; i++;
		}else{
			temp.push_back(right[j]);
			k++; j++;
		}
	}
	while(i < left.size()){
		temp.push_back(left[i]); k++; i++;
	}

	while(j < right.size()){
		temp.push_back(right[j]); k++; j++;
	}

	return temp;
}

vi mergeSort(vi a){
	if(a.size() <= 1) return a;

	vi left, right, result;
	int mid = (a.size() + 1)/2;
	for(int i = 0; i < mid; i++)left.push_back(a[i]);
	for(int j = mid; j < a.size(); j++) right.push_back(a[j]);
	left = mergeSort(left);
	right = mergeSort(right);
	result = merge(left, right);

	return result;
}
//MERGE SORT END


//QUICK SORT BEGIN

void swap(vi &a, int i, int j){
	int p = a[i];
	a[i] = a[j];
	a[j] = p;
}

int partition(vi &a, int low, int high){
	//I have to find the exact position of a[high];
	int pivot = a[high];
	int i = low-1;
	for(int j = low; j < high; j++){
		if(a[j] <= pivot){
			i++;
			swap(a,i,j);
		}
	}
	swap(a,i+1,high);
	return i+1;

}

void quickSort(vi &a, int low, int high){
	if(low < high){
		int pi = partition(a, low, high);
		quickSort(a, low, pi-1);
		quickSort(a, pi+1, high);
	}
}




//QUICK SORT END





int main(){
  ios_base::sync_with_stdio(false);

  vi a = {38, 27, 43, 3, 9, 82, 10};
  // insertionSort(a);
  // show(mergeSort(a));
  quickSort(a, 0, a.size()-1);
  show(a);

}