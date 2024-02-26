#include<bits/stdc++.h>
using namespace std;

int getFirstPos(vector<int> arr,int n,int k){
  int low = 0,high = n-1;
  int ans = -1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==k){
      ans = mid;
      high= mid-1;
    }
    else if(arr[mid]>k){
      high = mid-1;
    }
    else{
      low = mid+1;
    }
  }
  return ans;
}

int getLastPos(vector<int> arr,int n,int k){
  int low = 0;
  int high = n-1;
  int ans = -1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==k){
      low = mid+1;
      ans = mid;
    }
    else if(arr[mid]<k){
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
  return ans;
}

int main(){
  vector<int> arr = {2,8,8,8,8,8,11,13};
  int n = arr.size();
  int k = 8;
  int first = getFirstPos(arr,n,k);  
  int last = getLastPos(arr,n,k);
  cout<<first<<" "<<last<<endl;
  return 0;
}