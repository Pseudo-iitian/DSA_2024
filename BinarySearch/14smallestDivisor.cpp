#include<bits/stdc++.h>
using namespace std;

int calculate(vector<int> &nums,int x){
  int sum = 0;
  int n = nums.size();
  for(int i=0;i<n;++i){
    sum += (int)ceil((double)nums[i]/x);
  }
  return sum;
}

int smallestDivisor(vector<int>& nums, int threshold) {
  int low = 0;
  int high = nums.size()-1;
  int ans = -1;
  while(low<=high){
    int mid = low + (high-low)/2;
    int value = calculate(nums,nums[mid]);
    // cout<<value<<endl;
    if(value<=threshold){
      ans = nums[mid];
      high = mid -1;
    }
    else{
      low = mid +1;
    }
  }
  return ans;
}

int main(){
  vector<int> nums = {44,22,33,11,1};
  sort(nums.begin(),nums.end());
  int th = 5;
  cout<<smallestDivisor(nums,th);
  // cout<<calculate(nums,44);
  return 0;
}