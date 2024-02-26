#include<bits/stdc++.h>
using namespace std;

// Rearrange Array Elements by Sign
int find(vector<int> &nums,int idx){
  int n = nums.size();
  for(int i=idx;i<n;++i){
    if(nums[i]>0){
      return i;
    }
  }
  return -1;
}

vector<int> rearrangeArray(vector<int>& nums) {
  int n = nums.size();
  int i=0;
  while(i<n){
    if(nums[i]<0){
      // go for searching that index which is positve
      // all even indexes must be positive
      int idx = find(nums,i+1);
      if(idx!=-1) swap(nums[i],nums[idx]);
    }
    i+=2;
  }
  return nums;
}

int main(){
  vector<int> nums = {3,1,-2,-5,2,-4};
  vector<int> arr = rearrangeArray(nums);
  for(auto &val: arr){
    cout<<val<<" ";
  }
  return 0;
}