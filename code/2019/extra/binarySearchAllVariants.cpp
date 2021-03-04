#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

//bool contains
bool contains(vi a, int low, int high, int target){
  while(low<=high){
    int mid = (low + high)/2;
    if(a[mid] == target) return true;
    else if(a[mid] < target) low = mid+1;
    else if(a[mid] > target) high = mid-1;
  }
  return false;
}


//first occurence of key
int first(vi a, int low, int high, int target){
  int ans = -1;
  while(low <= high){
    int mid = (low + high)/2;
    if(a[mid] < target){
      low = mid+1;
    }else if(a[mid] > target){
      high = mid-1;
    }else if(a[mid] == target){
      ans = mid;
      high = mid-1;
    }
  }
  return ans;
}

//last occurence of key

int last(vi a, int low, int high, int target){
  int ans = -1;
  while(low <= high){
    int mid = (low + high)/2;
    if(a[mid] < target){
      low = mid + 1;
    }else if(a[mid] > target){
      high = mid-1;
    }else{
      ans = mid;
      low = mid+1;
    }
  }
  return ans;
}

int Greatestlesser(vi a, int low, int high, int target){
  int ans = -1;
  while(low <= high){
    int mid = (low + high)/2;
    if(a[mid] < target){
      ans = mid;
      low = mid + 1;
    }else if(a[mid] > target){
      high = mid-1;
    }else if(a[mid] == target){
      high = mid-1;
    }
  }
  return ans;
}

int leastGreatest(vi a, int low, int high, int target){
  int ans = -1;
  while(low <= high){
    int mid = (low + high)/2;
    if(a[mid] < target){
      low = mid + 1;
    }else if(a[mid] > target){
      ans = mid;
      high = mid-1;
    }else if(a[mid] == target){
      low = mid+1;
    }
  }
  return ans;
}

int main(){
  vi a = {2,3,3,5,5,5,6,6};
  int t;
  cin>>t;
  while(t--){
    int p;
    cin>>p;
    cout<<first(a, 0, a.size(), p)<<endl;
    cout<<last(a, 0, a.size(), p)<<endl;

    // cout<<contains(a, 0, a.size(), p)<<endl;

  }

}
