#include<bits/stdc++.h>
using namespace std;

long long largestPerimeter(vector<int>& nums) {
    int n = nums.size();
    long long sum = 0;
    long long mx = -1;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;++i){
        if(sum>nums[i]){
            sum = sum + nums[i];
            mx = max(mx,sum);
        }
        else{
            sum += nums[i];
        }
    }
    return mx;
}

int main(){
  // vector<int> nums = {5,5,5};
  vector<int> nums = {1,12,1,2,5,50,3};
  cout<<largestPerimeter(nums);
  return 0;
}