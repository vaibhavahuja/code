//write on notebook first

#include <iostream>
#include <stack>
using namespace std;

void show(stack <int> p){
  while(!p.empty()){
    cout<<p.top()<<" ";
    p.pop();
  }
  cout<<endl;
}

int m(int arr[], int m, int qk){
  int p = arr[m];
  int k = m-1;
  int i = m;
  while(i>0 && arr[i]>=p){
    k = i;
    i--;
  }
  if(k<=qk) return k;
  else return qk;
}


int main(){
  int arr[6] = {2,1,5,6,2,3};
  // int index[6] = {0};
  int answer[6] = {0};
  int i=0;
  int index = 0;
  stack <int> s;
  stack <int> in;
  // for(int i=0;i<6;i++){
  //   cout<<arr[i]<<" "<<m(arr,i, index)<<endl;
  //   index++;
  // }

  s.push(arr[0]);
  in.push(m(arr,i,index));
  index++;
  while(!s.empty()){
    if(s.top() < arr[i]){
      answer[i] = arr[i] * (index-in.top());
      s.pop();
      in.pop();
    }
    else{
      index++;
      s.push(arr[i]);
      i++;
      in.push(m(arr,i,index));
      // show(s);
      // cout<<endl;
      // show(in);
      // cout<<endl;
    }
    if(i==5){
      answer[i] = arr[i] * index-in.top();
      s.pop();
      in.pop();
      i--;
    }
  }
  for(int i=0;i<6;i++){
    cout<<answer[i]<<" ";
  }


}
