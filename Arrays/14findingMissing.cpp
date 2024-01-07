#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int>& nums) {
    //1- basic approach
    int val = 0;
    int n = nums.size();
    // vector<int> extra(n+1,0);
    // for(int i=0;i<n;++i){
    //     extra[nums[i]]=1;
    // }
    // for(int i=0;i<extra.size();++i){
    //     if(extra[i]==0){
    //         val = i;
    //         break;
    //     }
    // }

    // 2- optimal approach
    // int sum = 0;
    // for(int i=0;i<n;++i){
    //     sum += nums[i];
    // }
    // int sn = n*(n+1)/2;
    // int ans = sn - sum;
    // return ans;

    // 3- optimal using xor
    
    return val;
}
int main(){
    vector<int> nums = {0,1};
    cout<<missingNumber(nums);
    return 0;
}