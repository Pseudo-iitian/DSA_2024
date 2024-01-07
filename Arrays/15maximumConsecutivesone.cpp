#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// maximum consecutives one
int findMaxConsecutiveOnes(vector<int>& nums) {
    int i=0;
    int mx = INT_MIN;
    int n = nums.size();
    int count = 0;
    while(i<n){
        if(nums[i]==1){
            count++;
        }
        else{
            count=0;
        }
        i++;
        mx = max(mx,count);
    }
    mx = max(mx,count);
    return mx;
}

int main(){
    vector<int> nums = {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums);
    return 0;
}