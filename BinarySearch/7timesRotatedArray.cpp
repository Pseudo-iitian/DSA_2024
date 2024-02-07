#include<bits/stdc++.h>
using namespace std;

// right rotation is here ...
int timesRotated(vector<int> &ans){
  int n = ans.size();
  int low = 0;
  int high = n-1;
  int mn = INT_MAX;
  int times = 0;
  while(low<=high){
    int mid = (low+high)/2;
    if(ans[low]<=ans[mid]){
      // left is sorted
      if(ans[low]<mn){
        mn = ans[low];
        times = low;
      }
      low = mid+1;
    }
    else{
      if(ans[mid]<mn){
        mn = ans[mid];
        times = mid;  
      }
      high = mid-1;
    }
  }
  return times;
}
int main(){
  vector<int> arr = {3,4,5,1,2};
  int n = arr.size();
  cout<<timesRotated(arr);
  return 0;
}