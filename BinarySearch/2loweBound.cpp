#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr,int target){
  int n = arr.size();
  int low = 0;
  int high = n-1;
  int ans = n;
  while(low<=high){
    int mid = (low + high);
    if(arr[mid]>=target){
      ans = mid;
      high = mid-1;
    }
    else {
      low = mid+1;
    }
  }
  return ans;
}
int main(){
  vector<int> arr = {1,2,3,4,5,8};
  int target = 7;
  cout<<lowerBound(arr,target);
  return 0;
}