#include<bits/stdc++.h>
using namespace std;

// void singleNonDuplicate(vector<int>& nums,int low, int high,int &ans) {
//   int mid = (high+low)/2;
//   if(low>high) return;
//   if(mid==0 && nums[mid]!=nums[mid+1]){
//     ans = nums[mid];
//     return ;
//   }
//   if(mid==nums.size()-1 && nums[mid]!=nums[mid-1]){
//     ans = nums[mid];
//     return ;
//   }
//   if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
//     ans = nums[mid];
//     return;
//   }
//   singleNonDuplicate(nums,low,mid-1,ans);
//   singleNonDuplicate(nums,mid+1,high,ans);
// }

int f(vector<int> arr){
  int n = arr.size();
  if(arr[0]!=arr[1]){
    return arr[0];
  }
  if(arr[n-1]!=arr[n-2]){
    return arr[n-1];
  }
  int low = 1,high = n-2;
  while(low<=high){
    int mid = (low + (high-low)/2);
    if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
      return arr[mid];
    }
    else if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1])){
      // we are on odd index and element is same on left side
      //  then we are on left side and element is on right side 
      // element left side
      low = mid+1;
    }
    else{
      // eliminate right side
      high = mid-1;
    }
  }
  return -1;
}

int main(){
  vector<int> arr = {1,1,2,3,3,4,4};
  int n = arr.size();

  // int ans = -1;
  // cout<<singleElementInSortedArray(arr);
  // singleNonDuplicate(arr,0,n-1,ans);
  // cout<<ans;
  cout<<f(arr);
  return 0;

}