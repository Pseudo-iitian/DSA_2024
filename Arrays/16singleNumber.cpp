#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();
    int xr = 0;
    for(int i=0;i<nums.size();++i){
        xr = xr ^ nums[i];
    }
    return xr;
}
int main(){
    vector<int> nums = {2,2,1};
    cout<<singleNumber(nums);
    // 1- brute force - sue double loops 
    // 2- better - use hashing
    // disadvantage - for negative value and for long long values cant be used hashing we need to use map
    
    // 3- optimal - use xor 
    return 0;
}