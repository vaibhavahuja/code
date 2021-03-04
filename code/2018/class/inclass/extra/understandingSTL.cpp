#include <iostream>
#include <algorithm>
using namespace std;

bool Decrease(int a, int b){
  return (b<a);
}

class Movies{
public:
  int date;
  string title;

  Movies(int d, string s){
    date = d;
    title = s;
  }
};

bool sortByDate(Movies a, Movies b){
  return (a.date<b.date);
}

bool compareByString(Movies a, Movies b){
  return(a.title<b.title);
}

int main(){
  Movies a(31,"okay");
  // cout<<a.date<<endl;
  // cout<<a.title<<endl;
  Movies b(14,"abpe");
  Movies c(50,"aasad");
  //
  Movies arr[3] = {a,b,c};
  //
  sort(arr,arr+3, compareByString);
  for(int i=0;i<3;i++){
    cout<<arr[i].title<<" ";
  }
  sort(arr,arr+3, compareByString);


}
