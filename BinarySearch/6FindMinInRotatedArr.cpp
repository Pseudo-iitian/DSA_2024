#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
  int mn = INT_MAX;
  int low = 0;
  int high = nums.size()-1;
  while(low<=high){
    int mid = low + (high-low)/2;
    // lefft sorted hai
    if(nums[low]<=nums[mid]){
      mn = min(mn,nums[low]);
      low = mid+1;
    }
    else{
      mn = min(mn,nums[mid]);
      high = mid-1;
    }
  }
  return mn;
}
int main(){
  vector<int> arr = {4,5,1,2,3};
  int n = arr.size();
  cout<<findMin(arr);
  return 0;
}